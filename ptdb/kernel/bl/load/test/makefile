# Makefile for ptdb tests that use EasyMock
#
# @Authors: Christopher Brooks (makefile only)
#
# @Version: $Id: makefile 58742 2010-07-24 13:21:38Z cxh $
#
# @Copyright (c) 2010 The Regents of the University of California.
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

# Location of this directory, relative to the Ptolemy II directory
ME =		ptdb/kernel/bl/load/test

# Root of the Ptolemy II directory
ROOT =		../../../../..

# Configure looks for PowerMock.
# PTDBXML_JARS is set by configure
CLASSPATH =	$(ROOT)$(CLASSPATHSEPARATOR)$(PTPOWERMOCK_JARS)$(CLASSPATHSEPARATOR)$(PTDBXML_JARS)

# Get configuration info
CONFIG =	$(ROOT)/mk/ptII.mk
include $(CONFIG)

# If you add a file, be sure to add a line to test_java
JSRCS_TEST_DRIVERS = \
	TestLoadManager.java \
	TestDBModelFetcher.java \
	TestImportByReferenceRequirementsIntegration.java \
	TestLoadRequirementsIntegration.java

JSRCS = \
	$(JSRCS_TEST_DRIVERS)

EXTRA_SRCS =	$(JSRCS)

# Sources that may or may not be present, but if they are present, we don't
# want make checkjunk to barf on them.
MISC_FILES =

# make checkjunk will not report OPTIONAL_FILES as trash
# make distclean removes OPTIONAL_FILES
OPTIONAL_FILES =

JCLASS=	$(JSRCS:%.java=%.class)

# Don't include all or install rules here, we want the user
# to run 'make tests' to run the tests.

all: $(JCLASS)
	@echo "Run 'make tests' to run the tests"
install:
	@echo "Nothing to be done in $(ME)"

tests:: $(EXTRA_SRCS) jclass test_java

$(ROOT)/ptdb/config/database/testdata/Testing.dbxml:
	(cd $(ROOT)/ptdb/config/database/testdata; $(MAKE))

test_java: jclass $(ROOT)/ptdb/config/database/testdata/Testing.dbxml
	-LD_LIBRARY_PATH=${PTDBXML_LIB} DYLD_LIBRARY_PATH=${PTDBXML_LIB} "$(JAVA)" -classpath $(CLASSPATH)$(CLASSPATHSEPARATOR)$(AUXCLASSPATH) org.junit.runner.JUnitCore ptdb.kernel.bl.load.test.TestDBModelFetcher
	-LD_LIBRARY_PATH=${PTDBXML_LIB} DYLD_LIBRARY_PATH=${PTDBXML_LIB} "$(JAVA)" -classpath $(CLASSPATH)$(CLASSPATHSEPARATOR)$(AUXCLASSPATH) org.junit.runner.JUnitCore ptdb.kernel.bl.load.test.TestImportByReferenceRequirementsIntegration
	-LD_LIBRARY_PATH=${PTDBXML_LIB} DYLD_LIBRARY_PATH=${PTDBXML_LIB} "$(JAVA)" -classpath $(CLASSPATH)$(CLASSPATHSEPARATOR)$(AUXCLASSPATH) org.junit.runner.JUnitCore ptdb.kernel.bl.load.test.TestLoadManager
	-LD_LIBRARY_PATH=${PTDBXML_LIB} DYLD_LIBRARY_PATH=${PTDBXML_LIB} "$(JAVA)" -classpath $(CLASSPATH)$(CLASSPATHSEPARATOR)$(AUXCLASSPATH) org.junit.runner.JUnitCore ptdb.kernel.bl.load.test.TestLoadRequirementsIntegration

# These tests do not require a graphics terminal, but do use Java
test_jsimple: $(EXTRA_SRCS) jclass test_java

# Get the rest of the rules
include $(ROOT)/mk/ptcommon.mk
