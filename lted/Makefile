#
# OMNeT++/OMNEST Makefile for lted
#
# This file was generated with the command:
#  opp_makemake -f --deep -O out -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/networklayer/common -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/networklayer/icmpv6 -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/world/obstacles -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/networklayer/contract -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/networklayer/xmipv6 -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/networklayer/autorouting/ipv4 -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/util -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/transport/contract -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/status -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/mobility/static -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/linklayer/radio/propagation -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/linklayer/radio -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/util/headerserializers/tcp -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/networklayer/ipv4 -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/mobility/contract -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/util/headerserializers/ipv4 -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/base -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/util/headerserializers -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/world/radio -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/networklayer/ipv6 -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/transport/sctp -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/util/headerserializers/udp -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/networklayer/ipv6tunneling -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/util/headerserializers/ipv6 -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/battery/models -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/applications/pingapp -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/linklayer/contract -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/util/headerserializers/sctp -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/networklayer/arp -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/transport/tcp_common -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/mobility/common -I/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/src/transport/udp -L/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet/out/$$\(CONFIGNAME\)/src -linet -DINET_IMPORT -KINET_PROJ=/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet
#

# Name of target to be created (-o option)
TARGET = lted$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I$(INET_PROJ)/src/networklayer/common \
    -I$(INET_PROJ)/src/networklayer/icmpv6 \
    -I$(INET_PROJ)/src \
    -I$(INET_PROJ)/src/world/obstacles \
    -I$(INET_PROJ)/src/networklayer/contract \
    -I$(INET_PROJ)/src/networklayer/xmipv6 \
    -I$(INET_PROJ)/src/networklayer/autorouting/ipv4 \
    -I$(INET_PROJ)/src/util \
    -I$(INET_PROJ)/src/transport/contract \
    -I$(INET_PROJ)/src/status \
    -I$(INET_PROJ)/src/mobility/static \
    -I$(INET_PROJ)/src/linklayer/radio/propagation \
    -I$(INET_PROJ)/src/linklayer/radio \
    -I$(INET_PROJ)/src/util/headerserializers/tcp \
    -I$(INET_PROJ)/src/networklayer/ipv4 \
    -I$(INET_PROJ)/src/mobility/contract \
    -I$(INET_PROJ)/src/util/headerserializers/ipv4 \
    -I$(INET_PROJ)/src/base \
    -I$(INET_PROJ)/src/util/headerserializers \
    -I$(INET_PROJ)/src/world/radio \
    -I$(INET_PROJ)/src/networklayer/ipv6 \
    -I$(INET_PROJ)/src/transport/sctp \
    -I$(INET_PROJ)/src/util/headerserializers/udp \
    -I$(INET_PROJ)/src/networklayer/ipv6tunneling \
    -I$(INET_PROJ)/src/util/headerserializers/ipv6 \
    -I$(INET_PROJ)/src/battery/models \
    -I$(INET_PROJ)/src/applications/pingapp \
    -I$(INET_PROJ)/src/linklayer/contract \
    -I$(INET_PROJ)/src/util/headerserializers/sctp \
    -I$(INET_PROJ)/src/networklayer/arp \
    -I$(INET_PROJ)/src/transport/tcp_common \
    -I$(INET_PROJ)/src/mobility/common \
    -I$(INET_PROJ)/src/transport/udp \
    -I. \
    -Iresults \
    -Isimulations \
    -Isimulations/networks \
    -Isimulations/single \
    -Isimulations/single/results \
    -Isrc \
    -Isrc/common \
    -Isrc/common/nodes \
    -Isrc/common/timer \
    -Isrc/stack \
    -Isrc/stack/app \
    -Isrc/stack/mac \
    -Isrc/stack/mac/allocator \
    -Isrc/stack/mac/amc \
    -Isrc/stack/mac/buffer \
    -Isrc/stack/mac/buffer/harq \
    -Isrc/stack/mac/layer \
    -Isrc/stack/mac/packet \
    -Isrc/stack/mac/scheduler \
    -Isrc/stack/mac/scheduling_modules \
    -Isrc/stack/phy \
    -Isrc/stack/phy/ChannelModel \
    -Isrc/stack/phy/das \
    -Isrc/stack/phy/feedback \
    -Isrc/stack/phy/feedback/testFeedback \
    -Isrc/stack/phy/layer \
    -Isrc/stack/phy/packet

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = -L$(INET_PROJ)/out/$(CONFIGNAME)/src  -linet
LIBS += -Wl,-rpath,`abspath $(INET_PROJ)/out/$(CONFIGNAME)/src`

# Output directory
PROJECT_OUTPUT_DIR = out
PROJECTRELATIVE_PATH =
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/src/common/LteBinder.o \
    $O/src/common/LteCommon.o \
    $O/src/common/LteControlInfo.o \
    $O/src/common/lterecorder.o \
    $O/src/common/LteDeployer.o \
    $O/src/common/PhyPisaData.o \
    $O/src/common/timer/TTimer.o \
    $O/src/stack/app/appcclient.o \
    $O/src/stack/mac/allocator/LteAllocationModule.o \
    $O/src/stack/mac/amc/AmcPilotAuto.o \
    $O/src/stack/mac/amc/LteMcs.o \
    $O/src/stack/mac/amc/LteAmc.o \
    $O/src/stack/mac/buffer/LteMacBuffer.o \
    $O/src/stack/mac/buffer/LteMacQueue.o \
    $O/src/stack/mac/buffer/harq/LteHarqProcessRx.o \
    $O/src/stack/mac/buffer/harq/LteHarqBufferRx.o \
    $O/src/stack/mac/buffer/harq/LteHarqBufferTx.o \
    $O/src/stack/mac/buffer/harq/LteHarqUnitTx.o \
    $O/src/stack/mac/buffer/harq/LteHarqProcessTx.o \
    $O/src/stack/mac/layer/LteMacEnb.o \
    $O/src/stack/mac/layer/LteMacBase.o \
    $O/src/stack/mac/layer/LteMacUe.o \
    $O/src/stack/mac/scheduler/LcgScheduler.o \
    $O/src/stack/mac/scheduler/LteSchedulerEnbUl.o \
    $O/src/stack/mac/scheduler/LteSchedulerEnbDl.o \
    $O/src/stack/mac/scheduler/LteSchedulerUeUl.o \
    $O/src/stack/mac/scheduler/LteSchedulerEnb.o \
    $O/src/stack/mac/scheduler/LteScheduler.o \
    $O/src/stack/mac/scheduling_modules/LtePf.o \
    $O/src/stack/mac/scheduling_modules/LteDrr.o \
    $O/src/stack/mac/scheduling_modules/LteMaxCiComp.o \
    $O/src/stack/mac/scheduling_modules/LteMaxCiMultiband.o \
    $O/src/stack/mac/scheduling_modules/LteMaxCiOptMB.o \
    $O/src/stack/mac/scheduling_modules/LteMaxCi.o \
    $O/src/stack/phy/ChannelModel/LteDummyChannelModel.o \
    $O/src/stack/phy/ChannelModel/LteChannelModel.o \
    $O/src/stack/phy/ChannelModel/LteRealisticChannelModel.o \
    $O/src/stack/phy/das/RemoteAntennaSet.o \
    $O/src/stack/phy/das/DasFilter.o \
    $O/src/stack/phy/feedback/LteFeedback.o \
    $O/src/stack/phy/feedback/LteDlFeedbackGenerator.o \
    $O/src/stack/phy/feedback/LteFeedbackComputationDummy.o \
    $O/src/stack/phy/feedback/LteFeedbackComputationRealistic.o \
    $O/src/stack/phy/feedback/LteFeedbackComputation.o \
    $O/src/stack/phy/feedback/testFeedback/FeedbackTester.o \
    $O/src/stack/phy/layer/LtePhyUe.o \
    $O/src/stack/phy/layer/LtePhyBase.o \
    $O/src/stack/phy/layer/LtePhyEnb.o \
    $O/src/stack/phy/packet/LteFeedbackPkt.o \
    $O/src/stack/phy/packet/LteAirFrame.o \
    $O/src/common/LteControlInfo_m.o \
    $O/src/common/timer/TMultiTimerMsg_m.o \
    $O/src/common/timer/TTimerMsg_m.o \
    $O/src/stack/app/LteApp_m.o \
    $O/src/stack/mac/packet/LteHarqFeedback_m.o \
    $O/src/stack/mac/packet/LteMacPdu_m.o \
    $O/src/stack/mac/packet/LteSchedulingGrant_m.o \
    $O/src/stack/mac/packet/LteRac_m.o \
    $O/src/stack/phy/packet/LteFeedbackPkt_m.o \
    $O/src/stack/phy/packet/LteAirFrame_m.o

# Message files
MSGFILES = \
    src/common/LteControlInfo.msg \
    src/common/timer/TMultiTimerMsg.msg \
    src/common/timer/TTimerMsg.msg \
    src/stack/app/LteApp.msg \
    src/stack/mac/packet/LteHarqFeedback.msg \
    src/stack/mac/packet/LteMacPdu.msg \
    src/stack/mac/packet/LteSchedulingGrant.msg \
    src/stack/mac/packet/LteRac.msg \
    src/stack/phy/packet/LteFeedbackPkt.msg \
    src/stack/phy/packet/LteAirFrame.msg

# Other makefile variables (-K)
INET_PROJ=/home/lenovo/Documents/Research_project/omnetpp-4.6/samples/inet

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc or configuser.vc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIB_SUBDIR = $(OMNETPP_LIB_DIR)/$(TOOLCHAIN_NAME)
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" -loppmain$D $(USERIF_LIBS) $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS) -DINET_IMPORT $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH)

# we want to recompile everything if COPTS changes,
# so we store COPTS into $COPTS_FILE and have object
# files depend on it (except when "make depend" was called)
COPTS_FILE = $O/.last-copts
ifneq ($(MAKECMDGOALS),depend)
ifneq ("$(COPTS)","$(shell cat $(COPTS_FILE) 2>/dev/null || echo '')")
$(shell $(MKPATH) "$O" && echo "$(COPTS)" >$(COPTS_FILE))
endif
endif

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# <<<
#------------------------------------------------------------------------------

# Main target
all: $O/$(TARGET)
	$(Q)$(LN) $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@$(MKPATH) $O
	@echo Creating executable: $@
	$(Q)$(CXX) $(LDFLAGS) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS)

.PHONY: all clean cleanall depend msgheaders

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE)
	@$(MKPATH) $(dir $@)
	$(qecho) "$<"
	$(Q)$(CXX) -c $(CXXFLAGS) $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(qecho) MSGC: $<
	$(Q)$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

clean:
	$(qecho) Cleaning...
	$(Q)-rm -rf $O
	$(Q)-rm -f lted lted.exe liblted.so liblted.a liblted.dll liblted.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h
	$(Q)-rm -f results/*_m.cc results/*_m.h
	$(Q)-rm -f simulations/*_m.cc simulations/*_m.h
	$(Q)-rm -f simulations/networks/*_m.cc simulations/networks/*_m.h
	$(Q)-rm -f simulations/single/*_m.cc simulations/single/*_m.h
	$(Q)-rm -f simulations/single/results/*_m.cc simulations/single/results/*_m.h
	$(Q)-rm -f src/*_m.cc src/*_m.h
	$(Q)-rm -f src/common/*_m.cc src/common/*_m.h
	$(Q)-rm -f src/common/nodes/*_m.cc src/common/nodes/*_m.h
	$(Q)-rm -f src/common/timer/*_m.cc src/common/timer/*_m.h
	$(Q)-rm -f src/stack/*_m.cc src/stack/*_m.h
	$(Q)-rm -f src/stack/app/*_m.cc src/stack/app/*_m.h
	$(Q)-rm -f src/stack/mac/*_m.cc src/stack/mac/*_m.h
	$(Q)-rm -f src/stack/mac/allocator/*_m.cc src/stack/mac/allocator/*_m.h
	$(Q)-rm -f src/stack/mac/amc/*_m.cc src/stack/mac/amc/*_m.h
	$(Q)-rm -f src/stack/mac/buffer/*_m.cc src/stack/mac/buffer/*_m.h
	$(Q)-rm -f src/stack/mac/buffer/harq/*_m.cc src/stack/mac/buffer/harq/*_m.h
	$(Q)-rm -f src/stack/mac/layer/*_m.cc src/stack/mac/layer/*_m.h
	$(Q)-rm -f src/stack/mac/packet/*_m.cc src/stack/mac/packet/*_m.h
	$(Q)-rm -f src/stack/mac/scheduler/*_m.cc src/stack/mac/scheduler/*_m.h
	$(Q)-rm -f src/stack/mac/scheduling_modules/*_m.cc src/stack/mac/scheduling_modules/*_m.h
	$(Q)-rm -f src/stack/phy/*_m.cc src/stack/phy/*_m.h
	$(Q)-rm -f src/stack/phy/ChannelModel/*_m.cc src/stack/phy/ChannelModel/*_m.h
	$(Q)-rm -f src/stack/phy/das/*_m.cc src/stack/phy/das/*_m.h
	$(Q)-rm -f src/stack/phy/feedback/*_m.cc src/stack/phy/feedback/*_m.h
	$(Q)-rm -f src/stack/phy/feedback/testFeedback/*_m.cc src/stack/phy/feedback/testFeedback/*_m.h
	$(Q)-rm -f src/stack/phy/layer/*_m.cc src/stack/phy/layer/*_m.h
	$(Q)-rm -f src/stack/phy/packet/*_m.cc src/stack/phy/packet/*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc results/*.cc simulations/*.cc simulations/networks/*.cc simulations/single/*.cc simulations/single/results/*.cc src/*.cc src/common/*.cc src/common/nodes/*.cc src/common/timer/*.cc src/stack/*.cc src/stack/app/*.cc src/stack/mac/*.cc src/stack/mac/allocator/*.cc src/stack/mac/amc/*.cc src/stack/mac/buffer/*.cc src/stack/mac/buffer/harq/*.cc src/stack/mac/layer/*.cc src/stack/mac/packet/*.cc src/stack/mac/scheduler/*.cc src/stack/mac/scheduling_modules/*.cc src/stack/phy/*.cc src/stack/phy/ChannelModel/*.cc src/stack/phy/das/*.cc src/stack/phy/feedback/*.cc src/stack/phy/feedback/testFeedback/*.cc src/stack/phy/layer/*.cc src/stack/phy/packet/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/src/common/LteBinder.o: src/common/LteBinder.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/phy/das/RemoteAntennaSet.h
$O/src/common/LteCommon.o: src/common/LteCommon.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h
$O/src/common/LteControlInfo.o: src/common/LteControlInfo.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h
$O/src/common/LteControlInfo_m.o: src/common/LteControlInfo_m.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo_m.h \
	src/common/lterecorder.h
$O/src/common/LteDeployer.o: src/common/LteDeployer.cc \
	$(INET_PROJ)/src/base/BasicModule.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/mobility/common/MobilityBase.h \
	$(INET_PROJ)/src/mobility/contract/IMobility.h \
	$(INET_PROJ)/src/mobility/static/StationaryMobility.h \
	$(INET_PROJ)/src/util/FWMath.h \
	$(INET_PROJ)/src/world/radio/ChannelAccess.h \
	$(INET_PROJ)/src/world/radio/ChannelControl.h \
	$(INET_PROJ)/src/world/radio/IChannelControl.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/phy/das/RemoteAntennaSet.h
$O/src/common/PhyPisaData.o: src/common/PhyPisaData.cc \
	src/common/PhyPisaData.h
$O/src/common/lterecorder.o: src/common/lterecorder.cc \
	src/common/lterecorder.h
$O/src/common/timer/TMultiTimerMsg_m.o: src/common/timer/TMultiTimerMsg_m.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteCommon.h \
	src/common/lterecorder.h \
	src/common/timer/TMultiTimerMsg_m.h \
	src/common/timer/TTimerMsg_m.h
$O/src/common/timer/TTimer.o: src/common/timer/TTimer.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteCommon.h \
	src/common/lterecorder.h \
	src/common/timer/TMultiTimerMsg_m.h \
	src/common/timer/TTimer.h \
	src/common/timer/TTimerMsg_m.h
$O/src/common/timer/TTimerMsg_m.o: src/common/timer/TTimerMsg_m.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteCommon.h \
	src/common/lterecorder.h \
	src/common/timer/TTimerMsg_m.h
$O/src/stack/app/LteApp_m.o: src/stack/app/LteApp_m.cc \
	src/stack/app/LteApp_m.h
$O/src/stack/app/appcclient.o: src/stack/app/appcclient.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/app/LteApp_m.h \
	src/stack/app/appcclient.h \
	src/stack/phy/das/RemoteAntennaSet.h
$O/src/stack/mac/allocator/LteAllocationModule.o: src/stack/mac/allocator/LteAllocationModule.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/allocator/LteAllocationModule.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h
$O/src/stack/mac/amc/AmcPilotAuto.o: src/stack/mac/amc/AmcPilotAuto.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/AmcPilotAuto.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h
$O/src/stack/mac/amc/LteAmc.o: src/stack/mac/amc/LteAmc.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/AmcPilotAuto.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h
$O/src/stack/mac/amc/LteMcs.o: src/stack/mac/amc/LteMcs.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteCommon.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/LteMcs.h
$O/src/stack/mac/buffer/LteMacBuffer.o: src/stack/mac/buffer/LteMacBuffer.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteCommon.h \
	src/common/lterecorder.h \
	src/stack/mac/buffer/LteMacBuffer.h
$O/src/stack/mac/buffer/LteMacQueue.o: src/stack/mac/buffer/LteMacQueue.cc \
	src/stack/mac/buffer/LteMacQueue.h
$O/src/stack/mac/buffer/harq/LteHarqBufferRx.o: src/stack/mac/buffer/harq/LteHarqBufferRx.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/buffer/harq/LteHarqBufferRx.h \
	src/stack/mac/buffer/harq/LteHarqProcessRx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/mac/packet/LteHarqFeedback_m.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h
$O/src/stack/mac/buffer/harq/LteHarqBufferTx.o: src/stack/mac/buffer/harq/LteHarqBufferTx.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/lterecorder.h \
	src/stack/mac/buffer/harq/LteHarqBufferTx.h \
	src/stack/mac/buffer/harq/LteHarqProcessTx.h \
	src/stack/mac/buffer/harq/LteHarqUnitTx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/packet/LteHarqFeedback_m.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h
$O/src/stack/mac/buffer/harq/LteHarqProcessRx.o: src/stack/mac/buffer/harq/LteHarqProcessRx.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/lterecorder.h \
	src/stack/mac/buffer/harq/LteHarqProcessRx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/packet/LteHarqFeedback_m.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h
$O/src/stack/mac/buffer/harq/LteHarqProcessTx.o: src/stack/mac/buffer/harq/LteHarqProcessTx.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/lterecorder.h \
	src/stack/mac/buffer/harq/LteHarqProcessTx.h \
	src/stack/mac/buffer/harq/LteHarqUnitTx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h
$O/src/stack/mac/buffer/harq/LteHarqUnitTx.o: src/stack/mac/buffer/harq/LteHarqUnitTx.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/buffer/harq/LteHarqUnitTx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h
$O/src/stack/mac/layer/LteMacBase.o: src/stack/mac/layer/LteMacBase.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/buffer/LteMacBuffer.h \
	src/stack/mac/buffer/LteMacQueue.h \
	src/stack/mac/buffer/harq/LteHarqBufferRx.h \
	src/stack/mac/buffer/harq/LteHarqBufferTx.h \
	src/stack/mac/buffer/harq/LteHarqProcessRx.h \
	src/stack/mac/buffer/harq/LteHarqProcessTx.h \
	src/stack/mac/buffer/harq/LteHarqUnitTx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/packet/LteHarqFeedback_m.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h \
	src/stack/phy/das/RemoteAntennaSet.h
$O/src/stack/mac/layer/LteMacEnb.o: src/stack/mac/layer/LteMacEnb.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/allocator/LteAllocationModule.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/buffer/LteMacBuffer.h \
	src/stack/mac/buffer/LteMacQueue.h \
	src/stack/mac/buffer/harq/LteHarqBufferRx.h \
	src/stack/mac/buffer/harq/LteHarqBufferTx.h \
	src/stack/mac/buffer/harq/LteHarqProcessRx.h \
	src/stack/mac/buffer/harq/LteHarqProcessTx.h \
	src/stack/mac/buffer/harq/LteHarqUnitTx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/mac/packet/LteHarqFeedback_m.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h \
	src/stack/mac/packet/LteRac_m.h \
	src/stack/mac/packet/LteSchedulingGrant.h \
	src/stack/mac/packet/LteSchedulingGrant_m.h \
	src/stack/mac/scheduler/LteSchedulerEnb.h \
	src/stack/mac/scheduler/LteSchedulerEnbDl.h \
	src/stack/mac/scheduler/LteSchedulerEnbUl.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h \
	src/stack/phy/packet/LteFeedbackPkt.h \
	src/stack/phy/packet/LteFeedbackPkt_m.h
$O/src/stack/mac/layer/LteMacUe.o: src/stack/mac/layer/LteMacUe.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/buffer/LteMacBuffer.h \
	src/stack/mac/buffer/LteMacQueue.h \
	src/stack/mac/buffer/harq/LteHarqBufferRx.h \
	src/stack/mac/buffer/harq/LteHarqBufferTx.h \
	src/stack/mac/buffer/harq/LteHarqProcessRx.h \
	src/stack/mac/buffer/harq/LteHarqProcessTx.h \
	src/stack/mac/buffer/harq/LteHarqUnitTx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacUe.h \
	src/stack/mac/packet/LteHarqFeedback_m.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h \
	src/stack/mac/packet/LteRac_m.h \
	src/stack/mac/packet/LteSchedulingGrant.h \
	src/stack/mac/packet/LteSchedulingGrant_m.h \
	src/stack/mac/scheduler/LteSchedulerUeUl.h
$O/src/stack/mac/packet/LteHarqFeedback_m.o: src/stack/mac/packet/LteHarqFeedback_m.cc \
	src/stack/mac/packet/LteHarqFeedback_m.h
$O/src/stack/mac/packet/LteMacPdu_m.o: src/stack/mac/packet/LteMacPdu_m.cc \
	src/stack/mac/packet/LteMacPdu_m.h
$O/src/stack/mac/packet/LteRac_m.o: src/stack/mac/packet/LteRac_m.cc \
	src/stack/mac/packet/LteRac_m.h
$O/src/stack/mac/packet/LteSchedulingGrant_m.o: src/stack/mac/packet/LteSchedulingGrant_m.cc \
	src/stack/mac/packet/LteSchedulingGrant_m.h
$O/src/stack/mac/scheduler/LcgScheduler.o: src/stack/mac/scheduler/LcgScheduler.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/lterecorder.h \
	src/stack/mac/buffer/LteMacBuffer.h \
	src/stack/mac/buffer/harq/LteHarqBufferTx.h \
	src/stack/mac/buffer/harq/LteHarqProcessTx.h \
	src/stack/mac/buffer/harq/LteHarqUnitTx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacUe.h \
	src/stack/mac/packet/LteHarqFeedback_m.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h \
	src/stack/mac/scheduler/LcgScheduler.h
$O/src/stack/mac/scheduler/LteScheduler.o: src/stack/mac/scheduler/LteScheduler.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/buffer/harq/LteHarqBufferTx.h \
	src/stack/mac/buffer/harq/LteHarqProcessTx.h \
	src/stack/mac/buffer/harq/LteHarqUnitTx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/mac/packet/LteHarqFeedback_m.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h \
	src/stack/mac/scheduler/LteScheduler.h \
	src/stack/mac/scheduler/LteSchedulerEnb.h \
	src/stack/mac/scheduler/LteSchedulerEnbUl.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h
$O/src/stack/mac/scheduler/LteSchedulerEnb.o: src/stack/mac/scheduler/LteSchedulerEnb.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/Circular.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/allocator/LteAllocationModule.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/buffer/LteMacBuffer.h \
	src/stack/mac/buffer/LteMacQueue.h \
	src/stack/mac/buffer/harq/LteHarqBufferTx.h \
	src/stack/mac/buffer/harq/LteHarqProcessTx.h \
	src/stack/mac/buffer/harq/LteHarqUnitTx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/mac/packet/LteHarqFeedback_m.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h \
	src/stack/mac/scheduler/LteScheduler.h \
	src/stack/mac/scheduler/LteSchedulerEnb.h \
	src/stack/mac/scheduling_modules/LteDrr.h \
	src/stack/mac/scheduling_modules/LteMaxCi.h \
	src/stack/mac/scheduling_modules/LteMaxCiComp.h \
	src/stack/mac/scheduling_modules/LteMaxCiMultiband.h \
	src/stack/mac/scheduling_modules/LteMaxCiOptMB.h \
	src/stack/mac/scheduling_modules/LtePf.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h
$O/src/stack/mac/scheduler/LteSchedulerEnbDl.o: src/stack/mac/scheduler/LteSchedulerEnbDl.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/allocator/LteAllocationModule.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/buffer/harq/LteHarqBufferTx.h \
	src/stack/mac/buffer/harq/LteHarqProcessTx.h \
	src/stack/mac/buffer/harq/LteHarqUnitTx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/mac/packet/LteHarqFeedback_m.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h \
	src/stack/mac/scheduler/LteScheduler.h \
	src/stack/mac/scheduler/LteSchedulerEnb.h \
	src/stack/mac/scheduler/LteSchedulerEnbDl.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h
$O/src/stack/mac/scheduler/LteSchedulerEnbUl.o: src/stack/mac/scheduler/LteSchedulerEnbUl.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/allocator/LteAllocationModule.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/buffer/harq/LteHarqBufferRx.h \
	src/stack/mac/buffer/harq/LteHarqBufferTx.h \
	src/stack/mac/buffer/harq/LteHarqProcessRx.h \
	src/stack/mac/buffer/harq/LteHarqProcessTx.h \
	src/stack/mac/buffer/harq/LteHarqUnitTx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/mac/packet/LteHarqFeedback_m.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h \
	src/stack/mac/scheduler/LteSchedulerEnb.h \
	src/stack/mac/scheduler/LteSchedulerEnbUl.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h
$O/src/stack/mac/scheduler/LteSchedulerUeUl.o: src/stack/mac/scheduler/LteSchedulerUeUl.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/buffer/harq/LteHarqBufferTx.h \
	src/stack/mac/buffer/harq/LteHarqProcessTx.h \
	src/stack/mac/buffer/harq/LteHarqUnitTx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacUe.h \
	src/stack/mac/packet/LteHarqFeedback_m.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h \
	src/stack/mac/packet/LteSchedulingGrant.h \
	src/stack/mac/packet/LteSchedulingGrant_m.h \
	src/stack/mac/scheduler/LcgScheduler.h \
	src/stack/mac/scheduler/LteSchedulerUeUl.h
$O/src/stack/mac/scheduling_modules/LteDrr.o: src/stack/mac/scheduling_modules/LteDrr.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/Circular.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/buffer/harq/LteHarqBufferTx.h \
	src/stack/mac/buffer/harq/LteHarqProcessTx.h \
	src/stack/mac/buffer/harq/LteHarqUnitTx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/mac/packet/LteHarqFeedback_m.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h \
	src/stack/mac/scheduler/LteScheduler.h \
	src/stack/mac/scheduler/LteSchedulerEnb.h \
	src/stack/mac/scheduling_modules/LteDrr.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h
$O/src/stack/mac/scheduling_modules/LteMaxCi.o: src/stack/mac/scheduling_modules/LteMaxCi.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/buffer/harq/LteHarqBufferTx.h \
	src/stack/mac/buffer/harq/LteHarqProcessTx.h \
	src/stack/mac/buffer/harq/LteHarqUnitTx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/mac/packet/LteHarqFeedback_m.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h \
	src/stack/mac/scheduler/LteScheduler.h \
	src/stack/mac/scheduler/LteSchedulerEnb.h \
	src/stack/mac/scheduling_modules/LteMaxCi.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h
$O/src/stack/mac/scheduling_modules/LteMaxCiComp.o: src/stack/mac/scheduling_modules/LteMaxCiComp.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/buffer/harq/LteHarqBufferTx.h \
	src/stack/mac/buffer/harq/LteHarqProcessTx.h \
	src/stack/mac/buffer/harq/LteHarqUnitTx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/mac/packet/LteHarqFeedback_m.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h \
	src/stack/mac/scheduler/LteScheduler.h \
	src/stack/mac/scheduler/LteSchedulerEnb.h \
	src/stack/mac/scheduling_modules/LteMaxCiComp.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h
$O/src/stack/mac/scheduling_modules/LteMaxCiMultiband.o: src/stack/mac/scheduling_modules/LteMaxCiMultiband.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/buffer/harq/LteHarqBufferTx.h \
	src/stack/mac/buffer/harq/LteHarqProcessTx.h \
	src/stack/mac/buffer/harq/LteHarqUnitTx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/mac/packet/LteHarqFeedback_m.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h \
	src/stack/mac/scheduler/LteScheduler.h \
	src/stack/mac/scheduler/LteSchedulerEnb.h \
	src/stack/mac/scheduling_modules/LteMaxCiMultiband.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h
$O/src/stack/mac/scheduling_modules/LteMaxCiOptMB.o: src/stack/mac/scheduling_modules/LteMaxCiOptMB.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/buffer/LteMacBuffer.h \
	src/stack/mac/buffer/harq/LteHarqBufferTx.h \
	src/stack/mac/buffer/harq/LteHarqProcessTx.h \
	src/stack/mac/buffer/harq/LteHarqUnitTx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/mac/packet/LteHarqFeedback_m.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h \
	src/stack/mac/scheduler/LteScheduler.h \
	src/stack/mac/scheduler/LteSchedulerEnb.h \
	src/stack/mac/scheduling_modules/LteMaxCiOptMB.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h
$O/src/stack/mac/scheduling_modules/LtePf.o: src/stack/mac/scheduling_modules/LtePf.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/buffer/harq/LteHarqBufferTx.h \
	src/stack/mac/buffer/harq/LteHarqProcessTx.h \
	src/stack/mac/buffer/harq/LteHarqUnitTx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/mac/packet/LteHarqFeedback_m.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h \
	src/stack/mac/scheduler/LteScheduler.h \
	src/stack/mac/scheduler/LteSchedulerEnb.h \
	src/stack/mac/scheduling_modules/LtePf.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h
$O/src/stack/phy/ChannelModel/LteChannelModel.o: src/stack/phy/ChannelModel/LteChannelModel.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/lterecorder.h \
	src/stack/phy/ChannelModel/LteChannelModel.h
$O/src/stack/phy/ChannelModel/LteDummyChannelModel.o: src/stack/phy/ChannelModel/LteDummyChannelModel.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/lterecorder.h \
	src/stack/phy/ChannelModel/LteChannelModel.h \
	src/stack/phy/ChannelModel/LteDummyChannelModel.h
$O/src/stack/phy/ChannelModel/LteRealisticChannelModel.o: src/stack/phy/ChannelModel/LteRealisticChannelModel.cc \
	$(INET_PROJ)/src/base/BasicModule.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/radio/AirFrame_m.h \
	$(INET_PROJ)/src/linklayer/radio/ModulationType.h \
	$(INET_PROJ)/src/util/FWMath.h \
	$(INET_PROJ)/src/world/radio/ChannelAccess.h \
	$(INET_PROJ)/src/world/radio/ChannelControl.h \
	$(INET_PROJ)/src/world/radio/IChannelControl.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/phy/ChannelModel/LteChannelModel.h \
	src/stack/phy/ChannelModel/LteDummyChannelModel.h \
	src/stack/phy/ChannelModel/LteRealisticChannelModel.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h \
	src/stack/phy/feedback/LteFeedbackComputation.h \
	src/stack/phy/feedback/LteFeedbackComputationRealistic.h \
	src/stack/phy/layer/LtePhyBase.h \
	src/stack/phy/packet/LteAirFrame.h \
	src/stack/phy/packet/LteAirFrame_m.h
$O/src/stack/phy/das/DasFilter.o: src/stack/phy/das/DasFilter.cc \
	$(INET_PROJ)/src/base/BasicModule.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/radio/AirFrame_m.h \
	$(INET_PROJ)/src/linklayer/radio/ModulationType.h \
	$(INET_PROJ)/src/util/FWMath.h \
	$(INET_PROJ)/src/world/radio/ChannelAccess.h \
	$(INET_PROJ)/src/world/radio/ChannelControl.h \
	$(INET_PROJ)/src/world/radio/IChannelControl.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/phy/ChannelModel/LteChannelModel.h \
	src/stack/phy/ChannelModel/LteDummyChannelModel.h \
	src/stack/phy/ChannelModel/LteRealisticChannelModel.h \
	src/stack/phy/das/DasFilter.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h \
	src/stack/phy/feedback/LteFeedbackComputation.h \
	src/stack/phy/feedback/LteFeedbackComputationRealistic.h \
	src/stack/phy/layer/LtePhyBase.h \
	src/stack/phy/layer/LtePhyEnb.h \
	src/stack/phy/packet/LteAirFrame.h \
	src/stack/phy/packet/LteAirFrame_m.h
$O/src/stack/phy/das/RemoteAntennaSet.o: src/stack/phy/das/RemoteAntennaSet.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/stack/phy/das/RemoteAntennaSet.h
$O/src/stack/phy/feedback/LteDlFeedbackGenerator.o: src/stack/phy/feedback/LteDlFeedbackGenerator.cc \
	$(INET_PROJ)/src/base/BasicModule.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/radio/AirFrame_m.h \
	$(INET_PROJ)/src/linklayer/radio/ModulationType.h \
	$(INET_PROJ)/src/util/FWMath.h \
	$(INET_PROJ)/src/world/radio/ChannelAccess.h \
	$(INET_PROJ)/src/world/radio/ChannelControl.h \
	$(INET_PROJ)/src/world/radio/IChannelControl.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/common/timer/TMultiTimerMsg_m.h \
	src/common/timer/TTimer.h \
	src/common/timer/TTimerMsg_m.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/buffer/harq/LteHarqBufferTx.h \
	src/stack/mac/buffer/harq/LteHarqProcessTx.h \
	src/stack/mac/buffer/harq/LteHarqUnitTx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/mac/layer/LteMacUe.h \
	src/stack/mac/packet/LteHarqFeedback_m.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h \
	src/stack/phy/ChannelModel/LteChannelModel.h \
	src/stack/phy/ChannelModel/LteDummyChannelModel.h \
	src/stack/phy/ChannelModel/LteRealisticChannelModel.h \
	src/stack/phy/das/DasFilter.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteDlFeedbackGenerator.h \
	src/stack/phy/feedback/LteFeedback.h \
	src/stack/phy/feedback/LteFeedbackComputation.h \
	src/stack/phy/feedback/LteFeedbackComputationDummy.h \
	src/stack/phy/feedback/LteFeedbackComputationRealistic.h \
	src/stack/phy/layer/LtePhyBase.h \
	src/stack/phy/layer/LtePhyEnb.h \
	src/stack/phy/layer/LtePhyUe.h \
	src/stack/phy/packet/LteAirFrame.h \
	src/stack/phy/packet/LteAirFrame_m.h
$O/src/stack/phy/feedback/LteFeedback.o: src/stack/phy/feedback/LteFeedback.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteCommon.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/phy/feedback/LteFeedback.h
$O/src/stack/phy/feedback/LteFeedbackComputation.o: src/stack/phy/feedback/LteFeedbackComputation.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteCommon.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/phy/feedback/LteFeedback.h \
	src/stack/phy/feedback/LteFeedbackComputation.h
$O/src/stack/phy/feedback/LteFeedbackComputationDummy.o: src/stack/phy/feedback/LteFeedbackComputationDummy.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteCommon.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/phy/feedback/LteFeedback.h \
	src/stack/phy/feedback/LteFeedbackComputation.h \
	src/stack/phy/feedback/LteFeedbackComputationDummy.h
$O/src/stack/phy/feedback/LteFeedbackComputationRealistic.o: src/stack/phy/feedback/LteFeedbackComputationRealistic.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/phy/feedback/LteFeedback.h \
	src/stack/phy/feedback/LteFeedbackComputation.h \
	src/stack/phy/feedback/LteFeedbackComputationRealistic.h
$O/src/stack/phy/feedback/testFeedback/FeedbackTester.o: src/stack/phy/feedback/testFeedback/FeedbackTester.cc \
	$(INET_PROJ)/src/base/BasicModule.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/radio/AirFrame_m.h \
	$(INET_PROJ)/src/linklayer/radio/ModulationType.h \
	$(INET_PROJ)/src/util/FWMath.h \
	$(INET_PROJ)/src/world/radio/ChannelAccess.h \
	$(INET_PROJ)/src/world/radio/ChannelControl.h \
	$(INET_PROJ)/src/world/radio/IChannelControl.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/common/timer/TMultiTimerMsg_m.h \
	src/common/timer/TTimer.h \
	src/common/timer/TTimerMsg_m.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/phy/ChannelModel/LteChannelModel.h \
	src/stack/phy/ChannelModel/LteDummyChannelModel.h \
	src/stack/phy/ChannelModel/LteRealisticChannelModel.h \
	src/stack/phy/das/DasFilter.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteDlFeedbackGenerator.h \
	src/stack/phy/feedback/LteFeedback.h \
	src/stack/phy/feedback/LteFeedbackComputation.h \
	src/stack/phy/feedback/LteFeedbackComputationDummy.h \
	src/stack/phy/feedback/LteFeedbackComputationRealistic.h \
	src/stack/phy/feedback/testFeedback/FeedbackTester.h \
	src/stack/phy/layer/LtePhyBase.h \
	src/stack/phy/layer/LtePhyEnb.h \
	src/stack/phy/packet/LteAirFrame.h \
	src/stack/phy/packet/LteAirFrame_m.h
$O/src/stack/phy/layer/LtePhyBase.o: src/stack/phy/layer/LtePhyBase.cc \
	$(INET_PROJ)/src/base/BasicModule.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/radio/AirFrame_m.h \
	$(INET_PROJ)/src/linklayer/radio/ModulationType.h \
	$(INET_PROJ)/src/util/FWMath.h \
	$(INET_PROJ)/src/world/radio/ChannelAccess.h \
	$(INET_PROJ)/src/world/radio/ChannelControl.h \
	$(INET_PROJ)/src/world/radio/IChannelControl.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/phy/ChannelModel/LteChannelModel.h \
	src/stack/phy/ChannelModel/LteDummyChannelModel.h \
	src/stack/phy/ChannelModel/LteRealisticChannelModel.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h \
	src/stack/phy/feedback/LteFeedbackComputation.h \
	src/stack/phy/feedback/LteFeedbackComputationRealistic.h \
	src/stack/phy/layer/LtePhyBase.h \
	src/stack/phy/packet/LteAirFrame.h \
	src/stack/phy/packet/LteAirFrame_m.h
$O/src/stack/phy/layer/LtePhyEnb.o: src/stack/phy/layer/LtePhyEnb.cc \
	$(INET_PROJ)/src/base/BasicModule.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/radio/AirFrame_m.h \
	$(INET_PROJ)/src/linklayer/radio/ModulationType.h \
	$(INET_PROJ)/src/util/FWMath.h \
	$(INET_PROJ)/src/world/radio/ChannelAccess.h \
	$(INET_PROJ)/src/world/radio/ChannelControl.h \
	$(INET_PROJ)/src/world/radio/IChannelControl.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/phy/ChannelModel/LteChannelModel.h \
	src/stack/phy/ChannelModel/LteDummyChannelModel.h \
	src/stack/phy/ChannelModel/LteRealisticChannelModel.h \
	src/stack/phy/das/DasFilter.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h \
	src/stack/phy/feedback/LteFeedbackComputation.h \
	src/stack/phy/feedback/LteFeedbackComputationRealistic.h \
	src/stack/phy/layer/LtePhyBase.h \
	src/stack/phy/layer/LtePhyEnb.h \
	src/stack/phy/packet/LteAirFrame.h \
	src/stack/phy/packet/LteAirFrame_m.h \
	src/stack/phy/packet/LteFeedbackPkt.h \
	src/stack/phy/packet/LteFeedbackPkt_m.h
$O/src/stack/phy/layer/LtePhyUe.o: src/stack/phy/layer/LtePhyUe.cc \
	$(INET_PROJ)/src/base/BasicModule.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/radio/AirFrame_m.h \
	$(INET_PROJ)/src/linklayer/radio/ModulationType.h \
	$(INET_PROJ)/src/util/FWMath.h \
	$(INET_PROJ)/src/world/radio/ChannelAccess.h \
	$(INET_PROJ)/src/world/radio/ChannelControl.h \
	$(INET_PROJ)/src/world/radio/IChannelControl.h \
	src/common/LteBinder.h \
	src/common/LteCommon.h \
	src/common/LteControlInfo.h \
	src/common/LteControlInfo_m.h \
	src/common/LteDeployer.h \
	src/common/PhyPisaData.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/AmcPilot.h \
	src/stack/mac/amc/LteAmc.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/mac/buffer/harq/LteHarqBufferTx.h \
	src/stack/mac/buffer/harq/LteHarqProcessTx.h \
	src/stack/mac/buffer/harq/LteHarqUnitTx.h \
	src/stack/mac/layer/LteMacBase.h \
	src/stack/mac/layer/LteMacEnb.h \
	src/stack/mac/layer/LteMacUe.h \
	src/stack/mac/packet/LteHarqFeedback_m.h \
	src/stack/mac/packet/LteMacPdu.h \
	src/stack/mac/packet/LteMacPdu_m.h \
	src/stack/phy/ChannelModel/LteChannelModel.h \
	src/stack/phy/ChannelModel/LteDummyChannelModel.h \
	src/stack/phy/ChannelModel/LteRealisticChannelModel.h \
	src/stack/phy/das/DasFilter.h \
	src/stack/phy/das/RemoteAntennaSet.h \
	src/stack/phy/feedback/LteFeedback.h \
	src/stack/phy/feedback/LteFeedbackComputation.h \
	src/stack/phy/feedback/LteFeedbackComputationRealistic.h \
	src/stack/phy/layer/LtePhyBase.h \
	src/stack/phy/layer/LtePhyEnb.h \
	src/stack/phy/layer/LtePhyUe.h \
	src/stack/phy/packet/LteAirFrame.h \
	src/stack/phy/packet/LteAirFrame_m.h \
	src/stack/phy/packet/LteFeedbackPkt.h \
	src/stack/phy/packet/LteFeedbackPkt_m.h
$O/src/stack/phy/packet/LteAirFrame.o: src/stack/phy/packet/LteAirFrame.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/linklayer/radio/AirFrame_m.h \
	$(INET_PROJ)/src/linklayer/radio/ModulationType.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteCommon.h \
	src/common/lterecorder.h \
	src/stack/phy/packet/LteAirFrame.h \
	src/stack/phy/packet/LteAirFrame_m.h
$O/src/stack/phy/packet/LteAirFrame_m.o: src/stack/phy/packet/LteAirFrame_m.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/linklayer/radio/AirFrame_m.h \
	$(INET_PROJ)/src/linklayer/radio/ModulationType.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/stack/phy/packet/LteAirFrame_m.h
$O/src/stack/phy/packet/LteFeedbackPkt.o: src/stack/phy/packet/LteFeedbackPkt.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h \
	src/common/LteCommon.h \
	src/common/lterecorder.h \
	src/stack/mac/amc/LteMcs.h \
	src/stack/mac/amc/UserTxParams.h \
	src/stack/phy/feedback/LteFeedback.h \
	src/stack/phy/packet/LteFeedbackPkt.h \
	src/stack/phy/packet/LteFeedbackPkt_m.h
$O/src/stack/phy/packet/LteFeedbackPkt_m.o: src/stack/phy/packet/LteFeedbackPkt_m.cc \
	src/stack/phy/packet/LteFeedbackPkt_m.h

