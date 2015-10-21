TOSROOT=/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x
TOSDIR=/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos
TOSMAKE_PATH += $(TOSROOT)/contrib/ptII/ptinyos/tools/make
COMPONENT=_SendAndReceiveCnt_SendAndReceiveCnt_receiver5_RfmToLeds0
PFLAGS += -I%T/lib/Counters
PFLAGS += -DCOMMAND_PORT=10602 -DEVENT_PORT=10603
PFLAGS +=-D_PTII_NODEID=10
MY_PTCC_FLAGS += -D_PTII_NODE_NAME=_1SendAndReceiveCnt_1SendAndReceiveCnt_1receiver5_1RfmToLeds0
PFLAGS += "-I$(TOSROOT)/contrib/ptII/ptinyos/beta/TOSSIM-packet"
include /home/jenkins/workspace/ptII/mk/ptII.mk
include /home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tools/make/Makerules
