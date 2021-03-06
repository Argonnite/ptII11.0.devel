// Copyright (c) 2015 The Regents of the University of California.
// All rights reserved.

// Permission is hereby granted, without written agreement and without
// license or royalty fees, to use, copy, modify, and distribute this
// software and its documentation for any purpose, provided that the above
// copyright notice and the following two paragraphs appear in all copies
// of this software.

// IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY
// FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
// ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF
// THE UNIVERSITY OF CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF
// SUCH DAMAGE.

// THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
// INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. THE SOFTWARE
// PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND THE UNIVERSITY OF
// CALIFORNIA HAS NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES,
// ENHANCEMENTS, OR MODIFICATIONS.

/** Accessor for RESTful interfaces.
 *  Upon receipt of a trigger input, this accessor will issue an HTTP request
 *  specified by the inputs.
 *  The <i>options</i> input can be a string URL (with surrounding quotation marks)
 *  or an object with the following fields:
 *  <ul>
 *  <li> headers: An object containing request headers. By default this
 *       is an empty object. Items may have a value that is an array of values,
 *       for headers with more than one value.
 *  <li> keepAlive: A boolean that specified whether to keep sockets around
 *       in a pool to be used by other requests in the future. This defaults to false.
 *  <li> method: A string specifying the HTTP request method.
 *       This defaults to 'GET', but can also be 'PUT', 'POST', 'DELETE', etc.
 *  <li> url: A string that can be parsed as a URL, or an object containing
 *       the following fields:
 *       <ul>
 *       <li> host: A string giving the domain name or IP address of
 *            the server to issue the request to. This defaults to 'localhost'.
 *       <li> protocol: The protocol. This is a string that defaults to 'http'.
 *       <li> port: Port of remote server. This defaults to 80. 
 *       </ul>
 *  </ul>
 *
 *  For example, the <i>options</i> parameter could be set to
 *  <code>
 *  {"headers":{"Content-Type":"application/x-www-form-urlencoded"}, "method":"POST", "url":"..."}
 *  </code>
 *
 *  In addition, there is a <i>command</i> input that is a string that is appended
 *  as a path to the URL constructed from the <i>options</i> input. This defaults
 *  to the empty string.
 *
 *  The <i>arguments</i> input an object with fields that are converted to a query
 *  string to append to the url, for example '?arg=value'.
 *
 *  A <i>trigger</i> input triggers invocation of the current command. Any value provided
 *  on the trigger input is ignored.
 *
 *  The output response will be a string if the MIME type of the accessed page
 *  begins with "text". If the MIME type begins with anything else, then the
 *  binary data will be produced. It is up to the host implementation to ensure
 *  that the data is given in some form that is usable by downstream accessors
 *  or actors.
 *
 *  The parameter 'timeout' specifies how long this accessor will wait for response.
 *  If it does not receive the response by the specified time, then it will issue
 *  a null response output and an error event (calling the error() function of the host).
 *
 *  If the parameter 'outputCompleteResponseOnly' is true (the default), then this
 *  accessor will produce a 'response' output only upon receiving a complete response.
 *  If it is false, then multiple outputs may result from a single input or trigger.
 * 
 *  @accessor net/REST
 *  @author Edward A. Lee (eal@eecs.berkeley.edu)
 *  @input {JSON} options The url for the command or an object specifying options.
 *  @input {string} command The command.
 *  @input {JSON} arguments Arguments to the command.
 *  @input body The request body, if any.  This supports at least strings and image data.
 *  @input trigger An input to trigger the command.
 *  @output {string} response The server's response.
 *  @output {string} status The status code and message of the response.
 *  @output headers The headers sent with the response.
 *  @parameter {int} timeout The amount of time (in milliseconds) to wait for a response
 *   before triggering a null response and an error. This defaults to 5000.
 *  @parameter {boolean} outputCompleteResponseOnly If true (the default), the produce a
 *   'response' output only upon receiving the entire response.
 *  @version $$Id: REST.js 327 2015-10-02 01:29:01Z eal $$ 
 */

var httpClient = require('httpClient');
var querystring = require('querystring');

/** Define inputs and outputs. */
exports.setup = function () {
    input('options', {'type':'JSON', 'value':''});
    input('command', {'type':'string', 'value':''});
    input('arguments', {'type':'JSON', 'value':''});
    input('trigger');
    input('body');
    output('response');
    output('status', {'type':'string'});
    output('headers');
    parameter('timeout', {'value': 5000, 'type': 'int'});
    parameter('outputCompleteResponseOnly', {'value':true, 'type':'boolean'});
};

/** Build the path from the command and arguments.
 *  This default implementation returns 'command?args', where
 *  args is an encoding of the arguments input for embedding in a URL.
 *  For example, if the arguments input is the object
 *     ```{ foo: 'bar', baz: ['qux', 'quux'], corge: '' }```
 *  then the returned string will be
 *     ```command?foo=bar&baz=qux&baz=quux&corge=```
 *  Derived accessors may override this function to customize
 *  the interaction. The returned string should not include a leading '/'.
 *  That will be added automatically.
 */
exports.encodePath = function() {
    // Remove any leading slash that might be present.
    var command = get('command').replace(/^\//, '');
    var encodedArgs = querystring.stringify(get('arguments'));
    if (encodedArgs) {
        return command + '?' + encodedArgs;
    }
    return command;
};

/** Filter the response. This base class just returns the argument
 *  unmodified, but derived classes can override this to extract
 *  a portion of the response, for example.
 */
exports.filterResponse = function(response) {
    return response;
};

// Keep track of pending HTTP request so it can be stopped if the
// model stops executing.
var request;

/** Issue the command based on the current value of the inputs.
 *  This constructs a path using encodePath and combines it with the
 *  url input to construct the full command.
 *  @param callback The callback function that will be called with the
 *   response as an argument (an instance of IncomingMessage, defined in
 *   the httpClient module).
 */
exports.issueCommand = function(callback) {
    var encodedPath = this.encodePath();
    var options = get('options');
    var body = get('body');
    var command = options;
    if (typeof options === 'string') {
        // In order to be able to include the outputCompleteResponseOnly
        // option, we have to switch styles here.
        command = {};
        command.url = options + '/' + encodedPath;
    } else if (typeof command.url === 'string') {
        command.url += '/' + encodedPath;
    } else {
        command.url.path = '/' + encodedPath;
    }
    command.timeout = get('timeout');

    if (get('outputCompleteResponseOnly') === false) {
        command.outputCompleteResponseOnly = false;
    }
    
    if (typeof body !== undefined) {
    	command.body = body; 
    }
    
    console.log("REST request to: " + JSON.stringify(command));
    
    // To ensure that the callback is called with the same context
    // as this function, create a new function.
    var thiz = this;
    var contextCallback = function() {
        callback.apply(thiz, arguments);
    }
    
    request = httpClient.request(command, contextCallback);
    request.on('error', function(message) {
        if (!message) {
            message = 'Request failed. No further information.';
        }
        error(message);
    });
    request.end();
};

/** Handle the response from the RESTful service. The argument
 *  is expected to be be an instance of IncomingMessage, defined
 *  in the httpClient module. This base class extracts the body
 *  field of the message, if there is one, and produces that on
 *  the 'response' output, and otherwise just produces the message
 *  on the output. If the argument is null or undefined, then do
 *  nothing.
 *  @param message An incoming message.
 */
exports.handleResponse = function(message) {
    if (message !== null && message !== undefined) {
        if (message.body) {
            send('response', this.filterResponse(message.body));
        } else {
            send('response', this.filterResponse(message));
        }
        if (message.statusCode) {
            send('status', message.statusCode + ': ' + message.statusMessage);
        }
        if (message.headers) {
            send('headers', message.headers);
        }
    } else {
        // Send a null response.
        send('response', null);
    }
};

/** Register the input handler.  */
exports.initialize = function () {
    // Upon receiving a trigger input, issue a command.
	addInputHandler('trigger', this.issueCommand, this.handleResponse);
};

/** Upon wrapup, stop handling new inputs.  */
exports.wrapup = function () {
    // In case there is streaming data coming in, stop it.
    if (request) {
        request.stop();
        request = null;
    }
};
