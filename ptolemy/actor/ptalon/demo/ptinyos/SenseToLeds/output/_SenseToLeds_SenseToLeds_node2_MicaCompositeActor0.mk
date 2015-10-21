TOSROOT=/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x
TOSDIR=/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos
TOSMAKE_PATH += $(TOSROOT)/contrib/ptII/ptinyos/tools/make
COMPONENT=_SenseToLeds_SenseToLeds_node2_MicaCompositeActor0
PFLAGS += -I%T/lib/Counters
PFLAGS += -DCOMMAND_PORT=10586 -DEVENT_PORT=10587
PFLAGS +=-D_PTII_NODEID=2
MY_PTCC_FLAGS += -D_PTII_NODE_NAME=_1SenseToLeds_1SenseToLeds_1node2_1MicaCompositeActor0
PFLAGS += "-I$(TOSROOT)/contrib/ptII/ptinyos/beta/TOSSIM-packet"
include /home/jenkins/workspace/ptII/mk/ptII.mk
include /home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tools/make/Makerules
