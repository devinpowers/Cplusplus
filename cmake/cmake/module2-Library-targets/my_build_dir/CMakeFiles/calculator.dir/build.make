# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.22.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.22.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/devinpowers/Desktop/C++/Cmake/cmake/module2-Library-targets

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/devinpowers/Desktop/C++/Cmake/cmake/module2-Library-targets/my_build_dir

# Include any dependencies generated for this target.
include CMakeFiles/calculator.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/calculator.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/calculator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/calculator.dir/flags.make

CMakeFiles/calculator.dir/main.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/main.cpp.o: ../main.cpp
CMakeFiles/calculator.dir/main.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/devinpowers/Desktop/C++/Cmake/cmake/module2-Library-targets/my_build_dir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/calculator.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/main.cpp.o -MF CMakeFiles/calculator.dir/main.cpp.o.d -o CMakeFiles/calculator.dir/main.cpp.o -c /Users/devinpowers/Desktop/C++/Cmake/cmake/module2-Library-targets/main.cpp

CMakeFiles/calculator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/devinpowers/Desktop/C++/Cmake/cmake/module2-Library-targets/main.cpp > CMakeFiles/calculator.dir/main.cpp.i

CMakeFiles/calculator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/devinpowers/Desktop/C++/Cmake/cmake/module2-Library-targets/main.cpp -o CMakeFiles/calculator.dir/main.cpp.s

# Object files for target calculator
calculator_OBJECTS = \
"CMakeFiles/calculator.dir/main.cpp.o"

# External object files for target calculator
calculator_EXTERNAL_OBJECTS =

calculator: CMakeFiles/calculator.dir/main.cpp.o
calculator: CMakeFiles/calculator.dir/build.make
calculator: libmy_math.a
calculator: libmy_print.a
calculator: CMakeFiles/calculator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/devinpowers/Desktop/C++/Cmake/cmake/module2-Library-targets/my_build_dir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable calculator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calculator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/calculator.dir/build: calculator
.PHONY : CMakeFiles/calculator.dir/build

CMakeFiles/calculator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/calculator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/calculator.dir/clean

CMakeFiles/calculator.dir/depend:
	cd /Users/devinpowers/Desktop/C++/Cmake/cmake/module2-Library-targets/my_build_dir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/devinpowers/Desktop/C++/Cmake/cmake/module2-Library-targets /Users/devinpowers/Desktop/C++/Cmake/cmake/module2-Library-targets /Users/devinpowers/Desktop/C++/Cmake/cmake/module2-Library-targets/my_build_dir /Users/devinpowers/Desktop/C++/Cmake/cmake/module2-Library-targets/my_build_dir /Users/devinpowers/Desktop/C++/Cmake/cmake/module2-Library-targets/my_build_dir/CMakeFiles/calculator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/calculator.dir/depend

