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
CMAKE_SOURCE_DIR = "C:\Users\Joseph\Documents\Dev-Workspace\Currency Converter"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Joseph\Documents\Dev-Workspace\Currency Converter\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Currency_Converter.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Currency_Converter.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Currency_Converter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Currency_Converter.dir/flags.make

CMakeFiles/Currency_Converter.dir/main.cpp.obj: CMakeFiles/Currency_Converter.dir/flags.make
CMakeFiles/Currency_Converter.dir/main.cpp.obj: C:/Users/Joseph/Documents/Dev-Workspace/Currency\ Converter/main.cpp
CMakeFiles/Currency_Converter.dir/main.cpp.obj: CMakeFiles/Currency_Converter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\Joseph\Documents\Dev-Workspace\Currency Converter\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Currency_Converter.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Currency_Converter.dir/main.cpp.obj -MF CMakeFiles\Currency_Converter.dir\main.cpp.obj.d -o CMakeFiles\Currency_Converter.dir\main.cpp.obj -c "C:\Users\Joseph\Documents\Dev-Workspace\Currency Converter\main.cpp"

CMakeFiles/Currency_Converter.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Currency_Converter.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Joseph\Documents\Dev-Workspace\Currency Converter\main.cpp" > CMakeFiles\Currency_Converter.dir\main.cpp.i

CMakeFiles/Currency_Converter.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Currency_Converter.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Joseph\Documents\Dev-Workspace\Currency Converter\main.cpp" -o CMakeFiles\Currency_Converter.dir\main.cpp.s

# Object files for target Currency_Converter
Currency_Converter_OBJECTS = \
"CMakeFiles/Currency_Converter.dir/main.cpp.obj"

# External object files for target Currency_Converter
Currency_Converter_EXTERNAL_OBJECTS =

Currency_Converter.exe: CMakeFiles/Currency_Converter.dir/main.cpp.obj
Currency_Converter.exe: CMakeFiles/Currency_Converter.dir/build.make
Currency_Converter.exe: CMakeFiles/Currency_Converter.dir/linkLibs.rsp
Currency_Converter.exe: CMakeFiles/Currency_Converter.dir/objects1.rsp
Currency_Converter.exe: CMakeFiles/Currency_Converter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\Joseph\Documents\Dev-Workspace\Currency Converter\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Currency_Converter.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Currency_Converter.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Currency_Converter.dir/build: Currency_Converter.exe
.PHONY : CMakeFiles/Currency_Converter.dir/build

CMakeFiles/Currency_Converter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Currency_Converter.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Currency_Converter.dir/clean

CMakeFiles/Currency_Converter.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Joseph\Documents\Dev-Workspace\Currency Converter" "C:\Users\Joseph\Documents\Dev-Workspace\Currency Converter" "C:\Users\Joseph\Documents\Dev-Workspace\Currency Converter\cmake-build-debug" "C:\Users\Joseph\Documents\Dev-Workspace\Currency Converter\cmake-build-debug" "C:\Users\Joseph\Documents\Dev-Workspace\Currency Converter\cmake-build-debug\CMakeFiles\Currency_Converter.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/Currency_Converter.dir/depend

