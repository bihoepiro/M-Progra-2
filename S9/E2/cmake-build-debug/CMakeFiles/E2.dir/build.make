# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/IamBihonda/Desktop/UTEC/C2/P2/Mentorias/S7/E2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/IamBihonda/Desktop/UTEC/C2/P2/Mentorias/S7/E2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/E2.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/E2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/E2.dir/flags.make

CMakeFiles/E2.dir/main.cpp.o: CMakeFiles/E2.dir/flags.make
CMakeFiles/E2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/IamBihonda/Desktop/UTEC/C2/P2/Mentorias/S7/E2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/E2.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/E2.dir/main.cpp.o -c /Users/IamBihonda/Desktop/UTEC/C2/P2/Mentorias/S7/E2/main.cpp

CMakeFiles/E2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/E2.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/IamBihonda/Desktop/UTEC/C2/P2/Mentorias/S7/E2/main.cpp > CMakeFiles/E2.dir/main.cpp.i

CMakeFiles/E2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/E2.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/IamBihonda/Desktop/UTEC/C2/P2/Mentorias/S7/E2/main.cpp -o CMakeFiles/E2.dir/main.cpp.s

CMakeFiles/E2.dir/CEstadistica.cpp.o: CMakeFiles/E2.dir/flags.make
CMakeFiles/E2.dir/CEstadistica.cpp.o: ../CEstadistica.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/IamBihonda/Desktop/UTEC/C2/P2/Mentorias/S7/E2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/E2.dir/CEstadistica.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/E2.dir/CEstadistica.cpp.o -c /Users/IamBihonda/Desktop/UTEC/C2/P2/Mentorias/S7/E2/CEstadistica.cpp

CMakeFiles/E2.dir/CEstadistica.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/E2.dir/CEstadistica.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/IamBihonda/Desktop/UTEC/C2/P2/Mentorias/S7/E2/CEstadistica.cpp > CMakeFiles/E2.dir/CEstadistica.cpp.i

CMakeFiles/E2.dir/CEstadistica.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/E2.dir/CEstadistica.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/IamBihonda/Desktop/UTEC/C2/P2/Mentorias/S7/E2/CEstadistica.cpp -o CMakeFiles/E2.dir/CEstadistica.cpp.s

# Object files for target E2
E2_OBJECTS = \
"CMakeFiles/E2.dir/main.cpp.o" \
"CMakeFiles/E2.dir/CEstadistica.cpp.o"

# External object files for target E2
E2_EXTERNAL_OBJECTS =

E2: CMakeFiles/E2.dir/main.cpp.o
E2: CMakeFiles/E2.dir/CEstadistica.cpp.o
E2: CMakeFiles/E2.dir/build.make
E2: CMakeFiles/E2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/IamBihonda/Desktop/UTEC/C2/P2/Mentorias/S7/E2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable E2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/E2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/E2.dir/build: E2
.PHONY : CMakeFiles/E2.dir/build

CMakeFiles/E2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/E2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/E2.dir/clean

CMakeFiles/E2.dir/depend:
	cd /Users/IamBihonda/Desktop/UTEC/C2/P2/Mentorias/S7/E2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/IamBihonda/Desktop/UTEC/C2/P2/Mentorias/S7/E2 /Users/IamBihonda/Desktop/UTEC/C2/P2/Mentorias/S7/E2 /Users/IamBihonda/Desktop/UTEC/C2/P2/Mentorias/S7/E2/cmake-build-debug /Users/IamBihonda/Desktop/UTEC/C2/P2/Mentorias/S7/E2/cmake-build-debug /Users/IamBihonda/Desktop/UTEC/C2/P2/Mentorias/S7/E2/cmake-build-debug/CMakeFiles/E2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/E2.dir/depend
