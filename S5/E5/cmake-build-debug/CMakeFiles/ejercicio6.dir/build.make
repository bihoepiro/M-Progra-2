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
CMAKE_SOURCE_DIR = /Users/IamBihonda/Desktop/UTEC/C2/P2/Lab/PP2/ejercicio6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/IamBihonda/Desktop/UTEC/C2/P2/Lab/PP2/ejercicio6/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ejercicio6.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ejercicio6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ejercicio6.dir/flags.make

CMakeFiles/ejercicio6.dir/main.cpp.o: CMakeFiles/ejercicio6.dir/flags.make
CMakeFiles/ejercicio6.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/IamBihonda/Desktop/UTEC/C2/P2/Lab/PP2/ejercicio6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ejercicio6.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ejercicio6.dir/main.cpp.o -c /Users/IamBihonda/Desktop/UTEC/C2/P2/Lab/PP2/ejercicio6/main.cpp

CMakeFiles/ejercicio6.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ejercicio6.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/IamBihonda/Desktop/UTEC/C2/P2/Lab/PP2/ejercicio6/main.cpp > CMakeFiles/ejercicio6.dir/main.cpp.i

CMakeFiles/ejercicio6.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ejercicio6.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/IamBihonda/Desktop/UTEC/C2/P2/Lab/PP2/ejercicio6/main.cpp -o CMakeFiles/ejercicio6.dir/main.cpp.s

CMakeFiles/ejercicio6.dir/funciones.cpp.o: CMakeFiles/ejercicio6.dir/flags.make
CMakeFiles/ejercicio6.dir/funciones.cpp.o: ../funciones.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/IamBihonda/Desktop/UTEC/C2/P2/Lab/PP2/ejercicio6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ejercicio6.dir/funciones.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ejercicio6.dir/funciones.cpp.o -c /Users/IamBihonda/Desktop/UTEC/C2/P2/Lab/PP2/ejercicio6/funciones.cpp

CMakeFiles/ejercicio6.dir/funciones.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ejercicio6.dir/funciones.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/IamBihonda/Desktop/UTEC/C2/P2/Lab/PP2/ejercicio6/funciones.cpp > CMakeFiles/ejercicio6.dir/funciones.cpp.i

CMakeFiles/ejercicio6.dir/funciones.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ejercicio6.dir/funciones.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/IamBihonda/Desktop/UTEC/C2/P2/Lab/PP2/ejercicio6/funciones.cpp -o CMakeFiles/ejercicio6.dir/funciones.cpp.s

# Object files for target ejercicio6
ejercicio6_OBJECTS = \
"CMakeFiles/ejercicio6.dir/main.cpp.o" \
"CMakeFiles/ejercicio6.dir/funciones.cpp.o"

# External object files for target ejercicio6
ejercicio6_EXTERNAL_OBJECTS =

ejercicio6: CMakeFiles/ejercicio6.dir/main.cpp.o
ejercicio6: CMakeFiles/ejercicio6.dir/funciones.cpp.o
ejercicio6: CMakeFiles/ejercicio6.dir/build.make
ejercicio6: CMakeFiles/ejercicio6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/IamBihonda/Desktop/UTEC/C2/P2/Lab/PP2/ejercicio6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ejercicio6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ejercicio6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ejercicio6.dir/build: ejercicio6
.PHONY : CMakeFiles/ejercicio6.dir/build

CMakeFiles/ejercicio6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ejercicio6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ejercicio6.dir/clean

CMakeFiles/ejercicio6.dir/depend:
	cd /Users/IamBihonda/Desktop/UTEC/C2/P2/Lab/PP2/ejercicio6/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/IamBihonda/Desktop/UTEC/C2/P2/Lab/PP2/ejercicio6 /Users/IamBihonda/Desktop/UTEC/C2/P2/Lab/PP2/ejercicio6 /Users/IamBihonda/Desktop/UTEC/C2/P2/Lab/PP2/ejercicio6/cmake-build-debug /Users/IamBihonda/Desktop/UTEC/C2/P2/Lab/PP2/ejercicio6/cmake-build-debug /Users/IamBihonda/Desktop/UTEC/C2/P2/Lab/PP2/ejercicio6/cmake-build-debug/CMakeFiles/ejercicio6.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ejercicio6.dir/depend
