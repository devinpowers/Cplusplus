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
CMAKE_SOURCE_DIR = /Users/devinpowers/Desktop/C++/cmake/cmake/module3/v3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/devinpowers/Desktop/C++/cmake/cmake/module3/v3/build

# Include any dependencies generated for this target.
include my_print_dir/CMakeFiles/my_print.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include my_print_dir/CMakeFiles/my_print.dir/compiler_depend.make

# Include the progress variables for this target.
include my_print_dir/CMakeFiles/my_print.dir/progress.make

# Include the compile flags for this target's objects.
include my_print_dir/CMakeFiles/my_print.dir/flags.make

my_print_dir/CMakeFiles/my_print.dir/src/print_result.cpp.o: my_print_dir/CMakeFiles/my_print.dir/flags.make
my_print_dir/CMakeFiles/my_print.dir/src/print_result.cpp.o: ../my_print_dir/src/print_result.cpp
my_print_dir/CMakeFiles/my_print.dir/src/print_result.cpp.o: my_print_dir/CMakeFiles/my_print.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/devinpowers/Desktop/C++/cmake/cmake/module3/v3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object my_print_dir/CMakeFiles/my_print.dir/src/print_result.cpp.o"
	cd /Users/devinpowers/Desktop/C++/cmake/cmake/module3/v3/build/my_print_dir && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT my_print_dir/CMakeFiles/my_print.dir/src/print_result.cpp.o -MF CMakeFiles/my_print.dir/src/print_result.cpp.o.d -o CMakeFiles/my_print.dir/src/print_result.cpp.o -c /Users/devinpowers/Desktop/C++/cmake/cmake/module3/v3/my_print_dir/src/print_result.cpp

my_print_dir/CMakeFiles/my_print.dir/src/print_result.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_print.dir/src/print_result.cpp.i"
	cd /Users/devinpowers/Desktop/C++/cmake/cmake/module3/v3/build/my_print_dir && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/devinpowers/Desktop/C++/cmake/cmake/module3/v3/my_print_dir/src/print_result.cpp > CMakeFiles/my_print.dir/src/print_result.cpp.i

my_print_dir/CMakeFiles/my_print.dir/src/print_result.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_print.dir/src/print_result.cpp.s"
	cd /Users/devinpowers/Desktop/C++/cmake/cmake/module3/v3/build/my_print_dir && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/devinpowers/Desktop/C++/cmake/cmake/module3/v3/my_print_dir/src/print_result.cpp -o CMakeFiles/my_print.dir/src/print_result.cpp.s

# Object files for target my_print
my_print_OBJECTS = \
"CMakeFiles/my_print.dir/src/print_result.cpp.o"

# External object files for target my_print
my_print_EXTERNAL_OBJECTS =

my_print_dir/libmy_print.a: my_print_dir/CMakeFiles/my_print.dir/src/print_result.cpp.o
my_print_dir/libmy_print.a: my_print_dir/CMakeFiles/my_print.dir/build.make
my_print_dir/libmy_print.a: my_print_dir/CMakeFiles/my_print.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/devinpowers/Desktop/C++/cmake/cmake/module3/v3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmy_print.a"
	cd /Users/devinpowers/Desktop/C++/cmake/cmake/module3/v3/build/my_print_dir && $(CMAKE_COMMAND) -P CMakeFiles/my_print.dir/cmake_clean_target.cmake
	cd /Users/devinpowers/Desktop/C++/cmake/cmake/module3/v3/build/my_print_dir && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_print.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
my_print_dir/CMakeFiles/my_print.dir/build: my_print_dir/libmy_print.a
.PHONY : my_print_dir/CMakeFiles/my_print.dir/build

my_print_dir/CMakeFiles/my_print.dir/clean:
	cd /Users/devinpowers/Desktop/C++/cmake/cmake/module3/v3/build/my_print_dir && $(CMAKE_COMMAND) -P CMakeFiles/my_print.dir/cmake_clean.cmake
.PHONY : my_print_dir/CMakeFiles/my_print.dir/clean

my_print_dir/CMakeFiles/my_print.dir/depend:
	cd /Users/devinpowers/Desktop/C++/cmake/cmake/module3/v3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/devinpowers/Desktop/C++/cmake/cmake/module3/v3 /Users/devinpowers/Desktop/C++/cmake/cmake/module3/v3/my_print_dir /Users/devinpowers/Desktop/C++/cmake/cmake/module3/v3/build /Users/devinpowers/Desktop/C++/cmake/cmake/module3/v3/build/my_print_dir /Users/devinpowers/Desktop/C++/cmake/cmake/module3/v3/build/my_print_dir/CMakeFiles/my_print.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : my_print_dir/CMakeFiles/my_print.dir/depend

