TOSROOT=/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x
TOSDIR=/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos
TOSMAKE_PATH += $(TOSROOT)/contrib/ptII/ptinyos/tools/make
COMPONENT=_Surge_MicaBoard4_MicaCompositeActor0
PFLAGS += -I%T/lib/Route -I%T/lib/Queue -I%T/lib/Broadcast -I%T/../apps/Surge/
PFLAGS += -DCOMMAND_PORT=10588 -DEVENT_PORT=10589
PFLAGS +=-D_PTII_NODEID=2
MY_PTCC_FLAGS += -D_PTII_NODE_NAME=_1Surge_1MicaBoard4_1MicaCompositeActor0
PFLAGS += "-I$(TOSROOT)/contrib/ptII/ptinyos/beta/TOSSIM-packet"
include /home/jenkins/workspace/ptII/mk/ptII.mk
include /home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tools/make/Makerules
