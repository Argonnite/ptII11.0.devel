# Makefile for the Java classes used to implement the Ptolemy DDE domain kernel
#
# @Authors: Christopher Hylands, based on a file by Thomas M. Parks
#
# @Version: $Id: makefile 57040 2010-01-27 20:52:32Z cxh $
#
# @Copyright (c) 1997-2009 The Regents of the University of California.
# All rights reserved.
#
# Permission is hereby granted, without written agreement and without
# license or royalty fees, to use, copy, modify, and distribute this
# software and its documentation for any purpose, provided that the
# above copyright notice and the following two paragraphs appear in all
# copies of this software.
#
# IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY
# FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
# ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF
# THE UNIVERSITY OF CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF
# SUCH DAMAGE.
#
# THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
# INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. THE SOFTWARE
# PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND THE UNIVERSITY OF
# CALIFORNIA HAS NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES,
# ENHANCEMENTS, OR MODIFICATIONS.
#
# 						PT_COPYRIGHT_VERSION_2
# 						COPYRIGHTENDKEY

ME =		ptolemy/domains/dde/kernel

DIRS = 		test

# Root of the Java directory
ROOT =		../../../..

CLASSPATH =	$(ROOT)

# Get configuration info
CONFIG =	$(ROOT)/mk/ptII.mk
include $(CONFIG)

# Used to build jar files
PTPACKAGE = 	kernel
PTCLASSJAR = 	$(PTPACKAGE).jar

JSRCS = \
	DDEActor.java \
	DDEDirector.java \
	DDEIOPort.java \
	DDEReceiver.java \
	DDEThread.java \
	FeedBackDelay.java \
	NullToken.java \
	ReceiverComparator.java \
        TimeKeeper.java \
	PrioritizedTimedQueue.java

EXTRA_SRCS =	$(JSRCS)

# Files or directories that are present, but that 'make checkjunk'
# should not complain about
MISC_FILES =	$(DIRS) test #demo

# make checkjunk will not report OPTIONAL_FILES as trash
# make distclean removes OPTIONAL_FILES
OPTIONAL_FILES = \
	doc \
	$(PTCLASSJAR) \
	'DDEDirector$$1.class' \
	'DDEDirector$$CapacityComparator.class' \
	'DDEDirector$$ReceiverCapacityComparator.class' \
	'PrioritizedTimedQueue$$Event.class'

JCLASS = $(JSRCS:%.java=%.class)


all: jclass
install: jclass $(PTCLASSJAR)


# Get the rest of the rules
include $(ROOT)/mk/ptcommon.mk
