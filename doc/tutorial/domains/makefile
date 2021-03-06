# Makefile for domains tutorial
#
# @Authors: Christopher Hylands, based on a file by Thomas M. Parks
#
# @Version: $Id: makefile 67778 2013-10-26 15:50:13Z cxh $
#
# @Copyright (c) 2010-2013 The Regents of the University of California.
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

ME =		doc/tutorial/domains

DIRS =

# Root of the Ptolemy II directory
ROOT =		../../..

# These classes use ptolemy/actor/gui/PlotTableauFrame.java which requires
# diva.jar, so we add diva.jar to the CLASSPATH in case PlotTableauFrame.java
# has not yet been compiled.
CLASSPATH =	$(ROOT)$(CLASSPATHSEPARATOR)$(DIVA_JAR)

# Get configuration info
CONFIG =	$(ROOT)/mk/ptII.mk
include $(CONFIG)

# Used to build jar files
PTPACKAGE = 	domains
PTCLASSJAR =

JSRCS = \
	AmorphousDirector.java \
	LatestTokenPNDirector.java \
	LeftRightDirector.java \
	NondogmaticPNDirector.java

MODELS = \
	AmorphousExample.xml \
	InconsistentModel.xml \
	LatestTokenPNModel.xml \
	LeftRightModel.xml \
	NondogmaticPNModel.xml \
	NondogmaticPNModelSimpler.xml \
	SensorModel.xml

OTHER_FILES_TO_BE_JARED = \
	domainOverview.htm \
	index.htm

EXTRA_SRCS =	$(JSRCS) \
	$(MODELS) \
	$(OTHER_FILES_TO_BE_JARED)

# Sources that may or may not be present, but if they are present, we don't
# want make checkjunk to barf on them.
MISC_FILES =	$(DIRS)

# make checkjunk will not report OPTIONAL_FILES as trash
# make distclean removes OPTIONAL_FILES
OPTIONAL_FILES = \
	doc \
	'AmorphousDirector$$DelegatingReceiver.class' \
	'LatestTokenPNDirector$$LatestTokenReceiver.class' \
	'LeftRightDirector$$LeftRightScheduler.class' \
	'LeftRightDirector$$LeftRightScheduler$$LeftRightComparator.class' \
	'NondogmaticPNDirector$$FlexibleReceiver.class' \
	$(PTCLASSJAR) \
	$(PTCLASSALLJAR)

JCLASS = $(JSRCS:%.java=%.class)

all: jclass
install: jclass jars

demo: all
	$(ROOT)/bin/vergil $(MODELS)


# Get the rest of the rules
include $(ROOT)/mk/ptcommon.mk
