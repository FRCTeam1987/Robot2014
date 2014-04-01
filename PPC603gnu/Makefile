# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/WindRiver/workspace3.3
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/2014AerialAssistRobot



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage.o


#Rules

# CommandBasedRobotTemplate
ifeq ($(DEBUG_MODE),1)
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEFINES = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBasedRobotTemplate/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBasedRobotTemplate/$(MODE_DIR)/% : CPU = PPC603
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL = gnu
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL_PATH = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBasedRobotTemplate/$(MODE_DIR)/% : LIBPATH = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : LIBS = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : OBJ_DIR := CommandBasedRobotTemplate/$(MODE_DIR)

OBJECTS_CommandBasedRobotTemplate = CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage.o

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out : $(OBJECTS_CommandBasedRobotTemplate)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_compile_file : $(FILE) ;

_clean :: CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean : 
	$(TRACE_FLAG)if [ -d "CommandBasedRobotTemplate" ]; then cd "CommandBasedRobotTemplate"; rm -rf $(MODE_DIR); fi


# CommandBasedRobotTemplate_partialImage
ifeq ($(DEBUG_MODE),1)
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEFINES = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : CPU = PPC603
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL = gnu
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBPATH = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBS = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : OBJ_DIR := CommandBasedRobotTemplate_partialImage/$(MODE_DIR)

CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/BroncoJoy.o : $(PRJ_ROOT_DIR)/BroncoJoy.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/CommandBase.o : $(PRJ_ROOT_DIR)/CommandBase.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/CommandBasedRobot.o : $(PRJ_ROOT_DIR)/CommandBasedRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoBackWinchForLatching.o : $(PRJ_ROOT_DIR)/Commands/Autonomous/AutoBackWinchForLatching.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoEngageShooterLatch.o : $(PRJ_ROOT_DIR)/Commands/Autonomous/AutoEngageShooterLatch.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoHot.o : $(PRJ_ROOT_DIR)/Commands/Autonomous/AutoHot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoOneBallHot.o : $(PRJ_ROOT_DIR)/Commands/Autonomous/AutoOneBallHot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoOneBallLeftNotHot.o : $(PRJ_ROOT_DIR)/Commands/Autonomous/AutoOneBallLeftNotHot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoOneBallNotHot.o : $(PRJ_ROOT_DIR)/Commands/Autonomous/AutoOneBallNotHot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoOneBallRightNotHot.o : $(PRJ_ROOT_DIR)/Commands/Autonomous/AutoOneBallRightNotHot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoRelatch.o : $(PRJ_ROOT_DIR)/Commands/Autonomous/AutoRelatch.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoShootIf.o : $(PRJ_ROOT_DIR)/Commands/Autonomous/AutoShootIf.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoShootIfHot.o : $(PRJ_ROOT_DIR)/Commands/Autonomous/AutoShootIfHot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoTwoBallHot.o : $(PRJ_ROOT_DIR)/Commands/Autonomous/AutoTwoBallHot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoTwoBallNotHot.o : $(PRJ_ROOT_DIR)/Commands/Autonomous/AutoTwoBallNotHot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoTwoBallNotHotLeft.o : $(PRJ_ROOT_DIR)/Commands/Autonomous/AutoTwoBallNotHotLeft.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoTwoBallNotHotRight.o : $(PRJ_ROOT_DIR)/Commands/Autonomous/AutoTwoBallNotHotRight.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutonomousSequence.o : $(PRJ_ROOT_DIR)/Commands/Autonomous/AutonomousSequence.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/DecideAutoHot.o : $(PRJ_ROOT_DIR)/Commands/Autonomous/DecideAutoHot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/CameraLEDs.o : $(PRJ_ROOT_DIR)/Commands/CameraLEDs.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Chassis/AutoDrive.o : $(PRJ_ROOT_DIR)/Commands/Chassis/AutoDrive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Chassis/AutoDriveTimed.o : $(PRJ_ROOT_DIR)/Commands/Chassis/AutoDriveTimed.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Chassis/CheckChassisSensors.o : $(PRJ_ROOT_DIR)/Commands/Chassis/CheckChassisSensors.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Chassis/Drive.o : $(PRJ_ROOT_DIR)/Commands/Chassis/Drive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Chassis/Rotate.o : $(PRJ_ROOT_DIR)/Commands/Chassis/Rotate.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Chassis/ShiftDown.o : $(PRJ_ROOT_DIR)/Commands/Chassis/ShiftDown.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Chassis/ShiftUp.o : $(PRJ_ROOT_DIR)/Commands/Chassis/ShiftUp.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/EndOfMatchCommand.o : $(PRJ_ROOT_DIR)/Commands/EndOfMatchCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/ExampleCommand.o : $(PRJ_ROOT_DIR)/Commands/ExampleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/EyeCandy/AlliancePattern.o : $(PRJ_ROOT_DIR)/Commands/EyeCandy/AlliancePattern.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/EyeCandy/DisabledPattern.o : $(PRJ_ROOT_DIR)/Commands/EyeCandy/DisabledPattern.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/EyeCandy/RainbowPattern.o : $(PRJ_ROOT_DIR)/Commands/EyeCandy/RainbowPattern.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/EyeCandy/ShootPattern.o : $(PRJ_ROOT_DIR)/Commands/EyeCandy/ShootPattern.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/CheckIntakeSensors.o : $(PRJ_ROOT_DIR)/Commands/Intake/CheckIntakeSensors.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/ExtendCollector.o : $(PRJ_ROOT_DIR)/Commands/Intake/ExtendCollector.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/ForwardIntakeMotor.o : $(PRJ_ROOT_DIR)/Commands/Intake/ForwardIntakeMotor.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/LowerArmForShooter.o : $(PRJ_ROOT_DIR)/Commands/Intake/LowerArmForShooter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/LowerIntakeArm.o : $(PRJ_ROOT_DIR)/Commands/Intake/LowerIntakeArm.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/RaiseIntakeArm.o : $(PRJ_ROOT_DIR)/Commands/Intake/RaiseIntakeArm.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/RetractCollector.o : $(PRJ_ROOT_DIR)/Commands/Intake/RetractCollector.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/ReverseIntakeMotor.o : $(PRJ_ROOT_DIR)/Commands/Intake/ReverseIntakeMotor.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/RunCollector.o : $(PRJ_ROOT_DIR)/Commands/Intake/RunCollector.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/StopIntakeMotor.o : $(PRJ_ROOT_DIR)/Commands/Intake/StopIntakeMotor.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/WatchBall.o : $(PRJ_ROOT_DIR)/Commands/Intake/WatchBall.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/MatchConfiguration.o : $(PRJ_ROOT_DIR)/Commands/MatchConfiguration.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/NewCommandGroup.o : $(PRJ_ROOT_DIR)/Commands/NewCommandGroup.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/PassBall.o : $(PRJ_ROOT_DIR)/Commands/PassBall.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/PitConfiguration.o : $(PRJ_ROOT_DIR)/Commands/PitConfiguration.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/RunCompressor.o : $(PRJ_ROOT_DIR)/Commands/RunCompressor.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/AutoShoot.o : $(PRJ_ROOT_DIR)/Commands/Shooter/AutoShoot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/BackWinchForLatching.o : $(PRJ_ROOT_DIR)/Commands/Shooter/BackWinchForLatching.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/BackWinchMotor.o : $(PRJ_ROOT_DIR)/Commands/Shooter/BackWinchMotor.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/CheckShooterSensors.o : $(PRJ_ROOT_DIR)/Commands/Shooter/CheckShooterSensors.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/EngageShooterBrake.o : $(PRJ_ROOT_DIR)/Commands/Shooter/EngageShooterBrake.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/EngageShooterLatch.o : $(PRJ_ROOT_DIR)/Commands/Shooter/EngageShooterLatch.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/ForwardWinchMotor.o : $(PRJ_ROOT_DIR)/Commands/Shooter/ForwardWinchMotor.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/PrimeShooter.o : $(PRJ_ROOT_DIR)/Commands/Shooter/PrimeShooter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/PrimeShooterSequence.o : $(PRJ_ROOT_DIR)/Commands/Shooter/PrimeShooterSequence.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/RelatchShooter.o : $(PRJ_ROOT_DIR)/Commands/Shooter/RelatchShooter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/ReleaseBrakeForPriming.o : $(PRJ_ROOT_DIR)/Commands/Shooter/ReleaseBrakeForPriming.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/ReleaseShooterBrake.o : $(PRJ_ROOT_DIR)/Commands/Shooter/ReleaseShooterBrake.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/ReleaseShooterLatch.o : $(PRJ_ROOT_DIR)/Commands/Shooter/ReleaseShooterLatch.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/Shoot.o : $(PRJ_ROOT_DIR)/Commands/Shooter/Shoot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/StopWinchMotor.o : $(PRJ_ROOT_DIR)/Commands/Shooter/StopWinchMotor.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/TurnOffCameraLEDS.o : $(PRJ_ROOT_DIR)/Commands/TurnOffCameraLEDS.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/TurnOnCameraLEDS.o : $(PRJ_ROOT_DIR)/Commands/TurnOnCameraLEDS.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Subsystems/Chassis.o : $(PRJ_ROOT_DIR)/Subsystems/Chassis.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Subsystems/ExampleSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/ExampleSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Subsystems/EyeCandy.o : $(PRJ_ROOT_DIR)/Subsystems/EyeCandy.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Subsystems/Intake.o : $(PRJ_ROOT_DIR)/Subsystems/Intake.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Subsystems/Pneumatics.o : $(PRJ_ROOT_DIR)/Subsystems/Pneumatics.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Subsystems/Shooter.o : $(PRJ_ROOT_DIR)/Subsystems/Shooter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/XboxController.o : $(PRJ_ROOT_DIR)/XboxController.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_CommandBasedRobotTemplate_partialImage = CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/BroncoJoy.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/CommandBase.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/CommandBasedRobot.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoBackWinchForLatching.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoEngageShooterLatch.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoHot.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoOneBallHot.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoOneBallLeftNotHot.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoOneBallNotHot.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoOneBallRightNotHot.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoRelatch.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoShootIf.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoShootIfHot.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoTwoBallHot.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoTwoBallNotHot.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoTwoBallNotHotLeft.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoTwoBallNotHotRight.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutonomousSequence.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/DecideAutoHot.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/CameraLEDs.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Chassis/AutoDrive.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Chassis/AutoDriveTimed.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Chassis/CheckChassisSensors.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Chassis/Drive.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Chassis/Rotate.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Chassis/ShiftDown.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Chassis/ShiftUp.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/EndOfMatchCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/ExampleCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/EyeCandy/AlliancePattern.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/EyeCandy/DisabledPattern.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/EyeCandy/RainbowPattern.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/EyeCandy/ShootPattern.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/CheckIntakeSensors.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/ExtendCollector.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/ForwardIntakeMotor.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/LowerArmForShooter.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/LowerIntakeArm.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/RaiseIntakeArm.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/RetractCollector.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/ReverseIntakeMotor.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/RunCollector.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/StopIntakeMotor.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/WatchBall.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/MatchConfiguration.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/NewCommandGroup.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/PassBall.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/PitConfiguration.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/RunCompressor.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/AutoShoot.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/BackWinchForLatching.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/BackWinchMotor.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/CheckShooterSensors.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/EngageShooterBrake.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/EngageShooterLatch.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/ForwardWinchMotor.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/PrimeShooter.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/PrimeShooterSequence.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/RelatchShooter.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/ReleaseBrakeForPriming.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/ReleaseShooterBrake.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/ReleaseShooterLatch.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/Shoot.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/StopWinchMotor.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/TurnOffCameraLEDS.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/TurnOnCameraLEDS.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/OI.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Subsystems/Chassis.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Subsystems/ExampleSubsystem.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Subsystems/EyeCandy.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Subsystems/Intake.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Subsystems/Pneumatics.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Subsystems/Shooter.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/XboxController.o

CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage.o : $(OBJECTS_CommandBasedRobotTemplate_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_CommandBasedRobotTemplate_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage_compile_file : $(FILE) ;

_clean :: CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage_clean

CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "CommandBasedRobotTemplate_partialImage" ]; then cd "CommandBasedRobotTemplate_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/BroncoJoy.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/CommandBase.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/CommandBasedRobot.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoBackWinchForLatching.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoEngageShooterLatch.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoHot.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoOneBallHot.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoOneBallLeftNotHot.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoOneBallNotHot.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoOneBallRightNotHot.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoRelatch.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoShootIf.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoShootIfHot.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoTwoBallHot.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoTwoBallNotHot.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoTwoBallNotHotLeft.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutoTwoBallNotHotRight.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/AutonomousSequence.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Autonomous/DecideAutoHot.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/CameraLEDs.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Chassis/AutoDrive.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Chassis/AutoDriveTimed.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Chassis/CheckChassisSensors.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Chassis/Drive.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Chassis/Rotate.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Chassis/ShiftDown.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Chassis/ShiftUp.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/EndOfMatchCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/ExampleCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/EyeCandy/AlliancePattern.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/EyeCandy/DisabledPattern.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/EyeCandy/RainbowPattern.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/EyeCandy/ShootPattern.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/CheckIntakeSensors.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/ExtendCollector.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/ForwardIntakeMotor.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/LowerArmForShooter.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/LowerIntakeArm.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/RaiseIntakeArm.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/RetractCollector.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/ReverseIntakeMotor.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/RunCollector.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/StopIntakeMotor.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Intake/WatchBall.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/MatchConfiguration.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/NewCommandGroup.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/PassBall.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/PitConfiguration.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/RunCompressor.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/AutoShoot.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/BackWinchForLatching.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/BackWinchMotor.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/CheckShooterSensors.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/EngageShooterBrake.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/EngageShooterLatch.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/ForwardWinchMotor.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/PrimeShooter.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/PrimeShooterSequence.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/RelatchShooter.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/ReleaseBrakeForPriming.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/ReleaseShooterBrake.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/ReleaseShooterLatch.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/Shoot.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/Shooter/StopWinchMotor.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/TurnOffCameraLEDS.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Commands/TurnOnCameraLEDS.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/OI.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Subsystems/Chassis.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Subsystems/ExampleSubsystem.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Subsystems/EyeCandy.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Subsystems/Intake.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Subsystems/Pneumatics.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/Subsystems/Shooter.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014AerialAssistRobot/XboxController.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
