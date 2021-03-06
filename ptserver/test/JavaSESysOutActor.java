/*
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

package ptserver.test;

import java.awt.Container;
import java.awt.TextArea;

import ptolemy.actor.injection.PortableContainer;
import ptolemy.data.Token;

///////////////////////////////////////////////////////////////////
//// JavaSESysOutActor

/**
 * JavaSESysOutActor class.
 *
 * @author ahuseyno
 * @version $Id: JavaSESysOutActor.java 70398 2014-10-22 23:44:32Z cxh $
 * @since Ptolemy II 10.0
 * @Pt.ProposedRating Red (cxh)
 * @Pt.AcceptedRating Red (cxh)
 */
public class JavaSESysOutActor implements SysOutActorInterface {

    @Override
    public void printToken(Token token) {
        if (_area == null) {
            return;
        }
        _area.append(token.toString() + " ");
    }

    @Override
    public void place(PortableContainer container) {
        Container javaContainer = (Container) container.getPlatformContainer();
        _area = new TextArea();
        javaContainer.add(_area);
    }

    private TextArea _area;

}
