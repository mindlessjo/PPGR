# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.3.3\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.3.3\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Joseph\Documents\Dev-Workspace\Calendar

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Joseph\Documents\Dev-Workspace\Calendar\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Calendar.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Calendar.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Calendar.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Calendar.dir/flags.make

CMakeFiles/Calendar.dir/main.c.obj: CMakeFiles/Calendar.dir/flags.make
CMakeFiles/Calendar.dir/main.c.obj: C:/Users/Joseph/Documents/Dev-Workspace/Calendar/main.c
CMakeFiles/Calendar.dir/main.c.obj: CMakeFiles/Calendar.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Joseph\Documents\Dev-Workspace\Calendar\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Calendar.dir/main.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Calendar.dir/main.c.obj -MF CMakeFiles\Calendar.dir\main.c.obj.d -o CMakeFiles\Calendar.dir\main.c.obj -c C:\Users\Joseph\Documents\Dev-Workspace\Calendar\main.c

CMakeFiles/Calendar.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Calendar.dir/main.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Joseph\Documents\Dev-Workspace\Calendar\main.c > CMakeFiles\Calendar.dir\main.c.i

CMakeFiles/Calendar.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Calendar.dir/main.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Joseph\Documents\Dev-Workspace\Calendar\main.c -o CMakeFiles\Calendar.dir\main.c.s

# Object files for target Calendar
Calendar_OBJECTS = \
"CMakeFiles/Calendar.dir/main.c.obj"

# External object files for target Calendar
Calendar_EXTERNAL_OBJECTS =

Calendar.exe: CMakeFiles/Calendar.dir/main.c.obj
Calendar.exe: CMakeFiles/Calendar.dir/build.make
Calendar.exe: CMakeFiles/Calendar.dir/linkLibs.rsp
Calendar.exe: CMakeFiles/Calendar.dir/objects1.rsp
Calendar.exe: CMakeFiles/Calendar.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\Joseph\Documents\Dev-Workspace\Calendar\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Calendar.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Calendar.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Calendar.dir/build: Calendar.exe
.PHONY : CMakeFiles/Calendar.dir/build

CMakeFiles/Calendar.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Calendar.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Calendar.dir/clean

CMakeFiles/Calendar.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Joseph\Documents\Dev-Workspace\Calendar C:\Users\Joseph\Documents\Dev-Workspace\Calendar C:\Users\Joseph\Documents\Dev-Workspace\Calendar\cmake-build-debug C:\Users\Joseph\Documents\Dev-Workspace\Calendar\cmake-build-debug C:\Users\Joseph\Documents\Dev-Workspace\Calendar\cmake-build-debug\CMakeFiles\Calendar.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Calendar.dir/depend

