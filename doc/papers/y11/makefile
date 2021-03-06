# Makefile for the Ptolemy II 2011 papers
#
# Version: $Id: makefile 69602 2014-07-30 14:20:15Z cxh $
# Makefile Author: Christopher Brooks
#
# Copyright (c) 2011-2014 The Regents of the University of California.
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
##########################################################################

ME =		doc/papers/y11

# Sub directories to run make in.
DIRS =		modularSemantics

# Root of Ptolemy II directory
ROOT =		../../..

# Get configuration info
CONFIG =	$(ROOT)/mk/ptII.mk
include $(CONFIG)

PTPACKAGE = 	y11
PTCLASSJAR =

PTCLASSALLJAR = $(PTPACKAGE).jar

# Include the .class files from these jars in PTCLASSALLJAR
PTCLASSALLJARS = \
	modularSemantics/modularSemantics.jar

OTHER_FILES_TO_BE_JARED =

EXTRA_SRCS = $(OTHER_FILES_TO_BE_JARED)

KRUFT =

# Sources that may or may not be present, but if they are present, we don't
# want make checkjunk to barf on them.
MISC_FILES =	$(DIRS)

# make checkjunk will not report OPTIONAL_FILES as trash
# make distclean removes OPTIONAL_FILES
OPTIONAL_FILES =

all: suball
install: all jars

jnlps:
	@if [ "x$(DIRS)" != "x" ]; then \
		set $(DIRS); \
		for x do \
		    if [ -w $$x ] ; then \
			( cd $$x ; \
			echo making all in $(ME)/$$x ; \
			$(MAKE) $(MFLAGS) $(MAKEVARS) JNLP_MODEL_DIRECTORY=$(ME)/$$x jnlps ;\
			) \
		    fi ; \
		done ; \
	fi
# We don't include common.mk since we don't use the compiler here
include $(ROOT)/mk/ptno-compile.mk
