/* RecordTokenHandler converts RecordToken to/from byte stream.

 Copyright (c) 2011-2014 The Regents of the University of California.
 All rights reserved.
 Permission is hereby granted, without written agreement and without
 license or royalty fees, to use, copy, modify, and distribute this
 software and its documentation for any purpose, provided that the above
 copyright notice and the following two paragraphs appear in all copies
 of this software.

 IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY
 FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF
 THE UNIVERSITY OF CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF
 SUCH DAMAGE.

 THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. THE SOFTWARE
 PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND THE UNIVERSITY OF
 CALIFORNIA HAS NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES,
 ENHANCEMENTS, OR MODIFICATIONS.

 PT_COPYRIGHT_VERSION_2
 COPYRIGHTENDKEY
 */
package ptserver.data.handler;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.util.Iterator;

import ptolemy.data.RecordToken;
import ptolemy.data.Token;
import ptolemy.kernel.util.IllegalActionException;
import ptserver.data.TokenParser;

///////////////////////////////////////////////////////////////////
//// RecordTokenHandler

/** RecordTokenHandler converts RecordToken to/from byte stream.
 *  @author ishwinde
 *  @version $Id: RecordTokenHandler.java 70398 2014-10-22 23:44:32Z cxh $
 *  @since Ptolemy II 10.0
 *  @Pt.ProposedRating Red (ishwinde)
 *  @Pt.AcceptedRating Red (ishwinde)
 */
public class RecordTokenHandler implements TokenHandler<RecordToken> {

    ///////////////////////////////////////////////////////////////////
    ////                         public methods                    ////

    /** Write the RecordToken to a byte array.
     *  @param token Token to be converted to bytes.
     *  @param outputStream The stream to write to.
     *  @exception IOException If the stream cannot be written.
     *  @exception IllegalActionException Not thrown in this class.
     *  @see ptserver.data.handler.TokenHandler#convertToBytes(ptolemy.data.Token, java.io.DataOutputStream)
     */
    @Override
    public void convertToBytes(RecordToken token, DataOutputStream outputStream)
            throws IOException, IllegalActionException {

        outputStream.writeInt(token.length());

        Iterator iterator = token.labelSet().iterator();
        while (iterator.hasNext()) {
            String label = (String) iterator.next();
            Token valueToken = token.get(label);
            outputStream.writeUTF(label);

            TokenParser.getInstance().convertToBytes(valueToken, outputStream);
        }
    }

    /** Read an RecordToken from the input stream.
     *  @param inputStream The stream to read from.
     *  @param tokenType The type of token to be parsed.
     *  @return The populated RecordToken object.
     *  @exception IOException If the stream cannot be read.
     *  @exception IllegalActionException Not thrown in this class.
     *  @see ptserver.data.handler.TokenHandler#convertToToken(java.io.DataInputStream, Class)
     */
    @Override
    public RecordToken convertToToken(DataInputStream inputStream,
            Class<? extends RecordToken> tokenType) throws IOException,
            IllegalActionException {

        int size = inputStream.readInt();
        String[] labels = new String[size];
        Token[] tokens = new Token[size];

        for (int index = 0; index < size; index++) {
            labels[index] = inputStream.readUTF();
            tokens[index] = TokenParser.getInstance().convertToToken(
                    inputStream);
        }

        return new RecordToken(labels, tokens);
    }
}
