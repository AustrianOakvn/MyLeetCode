# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/30A83E93A83E5794/2023/Ritsumeikan/MyLeetCode/LeetCodeMaster/code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/30A83E93A83E5794/2023/Ritsumeikan/MyLeetCode/LeetCodeMaster/code/build

# Include any dependencies generated for this target.
include CMakeFiles/leetcode.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/leetcode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/leetcode.dir/flags.make

CMakeFiles/leetcode.dir/src/main.cpp.o: CMakeFiles/leetcode.dir/flags.make
CMakeFiles/leetcode.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/30A83E93A83E5794/2023/Ritsumeikan/MyLeetCode/LeetCodeMaster/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/leetcode.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/leetcode.dir/src/main.cpp.o -c /mnt/30A83E93A83E5794/2023/Ritsumeikan/MyLeetCode/LeetCodeMaster/code/src/main.cpp

CMakeFiles/leetcode.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leetcode.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/30A83E93A83E5794/2023/Ritsumeikan/MyLeetCode/LeetCodeMaster/code/src/main.cpp > CMakeFiles/leetcode.dir/src/main.cpp.i

CMakeFiles/leetcode.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leetcode.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/30A83E93A83E5794/2023/Ritsumeikan/MyLeetCode/LeetCodeMaster/code/src/main.cpp -o CMakeFiles/leetcode.dir/src/main.cpp.s

# Object files for target leetcode
leetcode_OBJECTS = \
"CMakeFiles/leetcode.dir/src/main.cpp.o"

# External object files for target leetcode
leetcode_EXTERNAL_OBJECTS =

leetcode: CMakeFiles/leetcode.dir/src/main.cpp.o
leetcode: CMakeFiles/leetcode.dir/build.make
leetcode: CMakeFiles/leetcode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/30A83E93A83E5794/2023/Ritsumeikan/MyLeetCode/LeetCodeMaster/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable leetcode"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/leetcode.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/leetcode.dir/build: leetcode

.PHONY : CMakeFiles/leetcode.dir/build

CMakeFiles/leetcode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/leetcode.dir/cmake_clean.cmake
.PHONY : CMakeFiles/leetcode.dir/clean

CMakeFiles/leetcode.dir/depend:
	cd /mnt/30A83E93A83E5794/2023/Ritsumeikan/MyLeetCode/LeetCodeMaster/code/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/30A83E93A83E5794/2023/Ritsumeikan/MyLeetCode/LeetCodeMaster/code /mnt/30A83E93A83E5794/2023/Ritsumeikan/MyLeetCode/LeetCodeMaster/code /mnt/30A83E93A83E5794/2023/Ritsumeikan/MyLeetCode/LeetCodeMaster/code/build /mnt/30A83E93A83E5794/2023/Ritsumeikan/MyLeetCode/LeetCodeMaster/code/build /mnt/30A83E93A83E5794/2023/Ritsumeikan/MyLeetCode/LeetCodeMaster/code/build/CMakeFiles/leetcode.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/leetcode.dir/depend

