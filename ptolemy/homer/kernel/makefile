# Makefile for kernel code for homer - a model gui builder
#
# @Version: $Id: makefile 67778 2013-10-26 15:50:13Z cxh $
# @Author: Christopher Brooks (makefile only)
#
# @Copyright (c) 2011-2013 The Regents of the University of California.
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

ME =		kernel

DIRS =

# Root of Ptolemy II directory
ROOT =		../../..

# Get configuration info
CONFIG =	$(ROOT)/mk/ptII.mk
include $(CONFIG)

# This package imports from ptserver, which may not be compiled yet.
CLASSPATH =	$(ROOT)$(CLASSPATHSEPARATOR)$(PTHOMER_JARS)$(CLASSPATHSEPARATOR)$(PTSERVER_JARS)

# Used to build jar files
PTPACKAGE = 	kernel
PTCLASSJAR =	$(PTPACKAGE).jar

# All the .class files necessary to run a Ptolemy II domain applet
#PTCLASSALLJARS = \
#PTCLASSALLJAR = $(PTPACKAGE).jar

OTHER_FILES_TO_BE_JARED =

EXTRA_SRCS = $(JSRCS) $(OTHER_FILES_TO_BE_JARED)

# Keep this list alphabetized.
JSRCS = \
	AttributeElement.java \
	AttributeRepresentation.java \
	ContentPrototype.java \
	EntityElement.java \
	HomerConstants.java \
	HomerLocation.java \
	HomerMultiContent.java \
	HomerWidgetElement.java \
	LayoutFileOperations.java \
	LayoutParser.java \
	MultiContent.java \
	PositionableElement.java \
	ScreenSize.java \
	TabDefinition.java \
	WidgetLoader.java

# Sources that may or may not be present, but if they are present, we don't
# want make checkjunk to barf on them.
MISC_FILES = $(DIRS)

OPTIONAL_FILES = \
	'LayoutFileOperations$$SinkOrSource.class' \
	'LayoutParser$$ScreenOrientation.class'

JCLASS = $(JSRCS:%.java=%.class)

all: jclass $(EXTRA_SRCS)
install: jclass jars

# Include rules for directories that contain only subdirectories.
include $(ROOT)/mk/ptcommon.mk
