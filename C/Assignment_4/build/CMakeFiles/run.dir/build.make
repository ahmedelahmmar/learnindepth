# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Projects/Software/Repositories/learnindepth/C/Assignment_4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Projects/Software/Repositories/learnindepth/C/Assignment_4/build

# Include any dependencies generated for this target.
include CMakeFiles/run.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/run.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/run.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/run.dir/flags.make

CMakeFiles/run.dir/main.c.o: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/main.c.o: /mnt/c/Projects/Software/Repositories/learnindepth/C/Assignment_4/main.c
CMakeFiles/run.dir/main.c.o: CMakeFiles/run.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/mnt/c/Projects/Software/Repositories/learnindepth/C/Assignment_4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/run.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/run.dir/main.c.o -MF CMakeFiles/run.dir/main.c.o.d -o CMakeFiles/run.dir/main.c.o -c /mnt/c/Projects/Software/Repositories/learnindepth/C/Assignment_4/main.c

CMakeFiles/run.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/run.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Projects/Software/Repositories/learnindepth/C/Assignment_4/main.c > CMakeFiles/run.dir/main.c.i

CMakeFiles/run.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/run.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Projects/Software/Repositories/learnindepth/C/Assignment_4/main.c -o CMakeFiles/run.dir/main.c.s

CMakeFiles/run.dir/src/Assignment_4.c.o: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/src/Assignment_4.c.o: /mnt/c/Projects/Software/Repositories/learnindepth/C/Assignment_4/src/Assignment_4.c
CMakeFiles/run.dir/src/Assignment_4.c.o: CMakeFiles/run.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/mnt/c/Projects/Software/Repositories/learnindepth/C/Assignment_4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/run.dir/src/Assignment_4.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/run.dir/src/Assignment_4.c.o -MF CMakeFiles/run.dir/src/Assignment_4.c.o.d -o CMakeFiles/run.dir/src/Assignment_4.c.o -c /mnt/c/Projects/Software/Repositories/learnindepth/C/Assignment_4/src/Assignment_4.c

CMakeFiles/run.dir/src/Assignment_4.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/run.dir/src/Assignment_4.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Projects/Software/Repositories/learnindepth/C/Assignment_4/src/Assignment_4.c > CMakeFiles/run.dir/src/Assignment_4.c.i

CMakeFiles/run.dir/src/Assignment_4.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/run.dir/src/Assignment_4.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Projects/Software/Repositories/learnindepth/C/Assignment_4/src/Assignment_4.c -o CMakeFiles/run.dir/src/Assignment_4.c.s

# Object files for target run
run_OBJECTS = \
"CMakeFiles/run.dir/main.c.o" \
"CMakeFiles/run.dir/src/Assignment_4.c.o"

# External object files for target run
run_EXTERNAL_OBJECTS =

run: CMakeFiles/run.dir/main.c.o
run: CMakeFiles/run.dir/src/Assignment_4.c.o
run: CMakeFiles/run.dir/build.make
run: CMakeFiles/run.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/mnt/c/Projects/Software/Repositories/learnindepth/C/Assignment_4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable run"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/run.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/run.dir/build: run
.PHONY : CMakeFiles/run.dir/build

CMakeFiles/run.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/run.dir/cmake_clean.cmake
.PHONY : CMakeFiles/run.dir/clean

CMakeFiles/run.dir/depend:
	cd /mnt/c/Projects/Software/Repositories/learnindepth/C/Assignment_4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Projects/Software/Repositories/learnindepth/C/Assignment_4 /mnt/c/Projects/Software/Repositories/learnindepth/C/Assignment_4 /mnt/c/Projects/Software/Repositories/learnindepth/C/Assignment_4/build /mnt/c/Projects/Software/Repositories/learnindepth/C/Assignment_4/build /mnt/c/Projects/Software/Repositories/learnindepth/C/Assignment_4/build/CMakeFiles/run.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/run.dir/depend

