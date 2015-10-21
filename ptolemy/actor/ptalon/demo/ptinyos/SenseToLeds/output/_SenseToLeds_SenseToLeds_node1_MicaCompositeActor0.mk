TOSROOT=/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x
TOSDIR=/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos
TOSMAKE_PATH += $(TOSROOT)/contrib/ptII/ptinyos/tools/make
COMPONENT=_SenseToLeds_SenseToLeds_node1_MicaCompositeActor0
PFLAGS += -I%T/lib/Counters
PFLAGS += -DCOMMAND_PORT=10584 -DEVENT_PORT=10585
PFLAGS +=-D_PTII_NODEID=1
MY_PTCC_FLAGS += -D_PTII_NODE_NAME=_1SenseToLeds_1SenseToLeds_1node1_1MicaCompositeActor0
PFLAGS += "-I$(TOSROOT)/contrib/ptII/ptinyos/beta/TOSSIM-packet"
include /home/jenkins/workspace/ptII/mk/ptII.mk
include /home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tools/make/Makerules
