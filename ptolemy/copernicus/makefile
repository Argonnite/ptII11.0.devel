# Ptolemy code generation using Soot 
#
# @Authors: (makefile) Christopher Hylands- based on a file by Thomas M. Parks
#
# @Version: $Id: makefile 53042 2009-04-10 20:31:21Z cxh $
#
# @Copyright (c) 2001-2009 The Regents of the University of California.
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

ME =		ptolemy/copernicus

# kernel first, then alphabetical, then gui
# PTJHDL_DIR is set by configure in $PTII/mk/ptII.mk if the jhdl jar file
# was found
# 3/2009 - copernicus/java disabled because the demos have not worked since
# 11/12/2008 - cxh
#COPERNICUS_JAVA = java
COPERNICUS_JAVA =
DIRS =		kernel applet interpreted shallow \
		$(COPERNICUS_JAVA) $(PTJHDL_DIR) gui

# Root of the Java directory
ROOT =		../..

CLASSPATH =	$(ROOT)

# Get configuration info
CONFIG =	$(ROOT)/mk/ptII.mk
include $(CONFIG)

# Used to build jar files
PTPACKAGE = 	copernicus
PTCLASSJAR =

# Include the .class files from these jars in PTCLASSALLJAR
PTCLASSALLJARS = \
	applet/applet.jar \
	interpreted/interpreted.jar \
	kernel/kernel.jar \
	shallow/shallow.jar \
	gui/gui.jar

#	java/java.jar

PTCLASSALLJAR = $(PTPACKAGE).jar
JSRCS =

OTHER_FILES_TO_BE_JARED = \
	copernicus.xml

EXTRA_SRCS =	$(JSRCS) $(OTHER_FILES_TO_BE_JARED)

# Sources that may or may not be present, but if they are present, we don't
# want make checkjunk to barf on them.
MISC_FILES =	$(DIRS) \
		README.txt
# make checkjunk will not report OPTIONAL_FILES as trash
# make realclean removes OPTIONAL_FILES
OPTIONAL_FILES = #jhdl

JCLASS = $(JSRCS:%.java=%.class)

all: jclass
install: all jars

# Get the rest of the rules
include $(ROOT)/mk/ptcommon.mk



