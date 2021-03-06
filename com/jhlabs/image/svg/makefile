# Java Image Processing code from svgSalamander code
#
# @Version: $Id: makefile 73313 2015-08-31 23:36:28Z cxh $
# @Author: Christopher Brooks (makefile only)
#
# @Copyright (c) 2015 The Regents of the University of California.
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

ME = 		com/jhlabs/image/svg

DIRS =		

# Root of Ptolemy II directory
ROOT =		../../../..

# PTSVGSALAMANDER_JAR is set to $PTII/lib/svgSalamander.jar by configure in $PTII/mk/ptII.mk
CLASSPATH =	$(ROOT)$(CLASSPATHSEPARATOR)$(PTSVGSALAMANDER_JAR)

# Get configuration info
CONFIG =	$(ROOT)/mk/ptII.mk
include $(CONFIG)

# Used to build jar files
PTPACKAGE = 	svg
PTCLASSJAR = 	$(PTPACKAGE).jar

JSRCS = \
	AnnotateFilter.java \


OTHER_FILES_TO_BE_JARED = \
	CapeCodOutline.svg

EXTRA_SRCS =	$(JSRCS) $(OTHER_FILES_TO_BE_JARED)

# Sources that may or may not be present, but if they are present, we don't
# want make checkjunk to barf on them.
# Don't include $(DIRS) here, we don't want make sources to run make demo
MISC_FILES =	#$(DIRS)

# make checkjunk will not report OPTIONAL_FILES as trash
# make distclean removes OPTIONAL_FILES
# driver is in OPTIONAL_FILES because we don't ship it.
OPTIONAL_FILES = \
	'CellularFilter$$Point.class' \
	'ChromeFilter$$1.class' \
	'CurlFilter$$Sampler.class' \
	'FieldWarpFilter$$Line.class' \
	'LightFilter$$1.class' \
	'LightFilter$$AmbientLight.class' \
	'LightFilter$$DistantLight.class' \
	'LightFilter$$Light.class' \
	'LightFilter$$Material.class' \
	'LightFilter$$PointLight.class' \
	'LightFilter$$SpotLight.class' \
	'OctTreeQuantizer$$OctTreeNode.class' \
	'ShatterFilter$$Tile.class'

JCLASS = $(JSRCS:%.java=%.class)

all: jclass
install: jclass $(PTCLASSJAR)
docs: javadocs

# Include the rest of the rules
include $(ROOT)/mk/ptcommon.mk

