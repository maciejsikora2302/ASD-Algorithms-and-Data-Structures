# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\admin\Documents\Studia\Semestr II\ASD\zadania\left_and_right_equal_to_x"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\admin\Documents\Studia\Semestr II\ASD\zadania\left_and_right_equal_to_x\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/left_and_right_equal_to_x.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/left_and_right_equal_to_x.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/left_and_right_equal_to_x.dir/flags.make

CMakeFiles/left_and_right_equal_to_x.dir/main.cpp.obj: CMakeFiles/left_and_right_equal_to_x.dir/flags.make
CMakeFiles/left_and_right_equal_to_x.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\Documents\Studia\Semestr II\ASD\zadania\left_and_right_equal_to_x\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/left_and_right_equal_to_x.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\left_and_right_equal_to_x.dir\main.cpp.obj -c "C:\Users\admin\Documents\Studia\Semestr II\ASD\zadania\left_and_right_equal_to_x\main.cpp"

CMakeFiles/left_and_right_equal_to_x.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/left_and_right_equal_to_x.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\Documents\Studia\Semestr II\ASD\zadania\left_and_right_equal_to_x\main.cpp" > CMakeFiles\left_and_right_equal_to_x.dir\main.cpp.i

CMakeFiles/left_and_right_equal_to_x.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/left_and_right_equal_to_x.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\Documents\Studia\Semestr II\ASD\zadania\left_and_right_equal_to_x\main.cpp" -o CMakeFiles\left_and_right_equal_to_x.dir\main.cpp.s

# Object files for target left_and_right_equal_to_x
left_and_right_equal_to_x_OBJECTS = \
"CMakeFiles/left_and_right_equal_to_x.dir/main.cpp.obj"

# External object files for target left_and_right_equal_to_x
left_and_right_equal_to_x_EXTERNAL_OBJECTS =

left_and_right_equal_to_x.exe: CMakeFiles/left_and_right_equal_to_x.dir/main.cpp.obj
left_and_right_equal_to_x.exe: CMakeFiles/left_and_right_equal_to_x.dir/build.make
left_and_right_equal_to_x.exe: CMakeFiles/left_and_right_equal_to_x.dir/linklibs.rsp
left_and_right_equal_to_x.exe: CMakeFiles/left_and_right_equal_to_x.dir/objects1.rsp
left_and_right_equal_to_x.exe: CMakeFiles/left_and_right_equal_to_x.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\Documents\Studia\Semestr II\ASD\zadania\left_and_right_equal_to_x\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable left_and_right_equal_to_x.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\left_and_right_equal_to_x.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/left_and_right_equal_to_x.dir/build: left_and_right_equal_to_x.exe

.PHONY : CMakeFiles/left_and_right_equal_to_x.dir/build

CMakeFiles/left_and_right_equal_to_x.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\left_and_right_equal_to_x.dir\cmake_clean.cmake
.PHONY : CMakeFiles/left_and_right_equal_to_x.dir/clean

CMakeFiles/left_and_right_equal_to_x.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\Documents\Studia\Semestr II\ASD\zadania\left_and_right_equal_to_x" "C:\Users\admin\Documents\Studia\Semestr II\ASD\zadania\left_and_right_equal_to_x" "C:\Users\admin\Documents\Studia\Semestr II\ASD\zadania\left_and_right_equal_to_x\cmake-build-debug" "C:\Users\admin\Documents\Studia\Semestr II\ASD\zadania\left_and_right_equal_to_x\cmake-build-debug" "C:\Users\admin\Documents\Studia\Semestr II\ASD\zadania\left_and_right_equal_to_x\cmake-build-debug\CMakeFiles\left_and_right_equal_to_x.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/left_and_right_equal_to_x.dir/depend
