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
CMAKE_SOURCE_DIR = "C:\Users\admin\Documents\Studia\Semestr II\ASD\zajecia 5\kod_z_zajec.cpp"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\admin\Documents\Studia\Semestr II\ASD\zajecia 5\kod_z_zajec.cpp\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/kod_z_zajec_cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/kod_z_zajec_cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/kod_z_zajec_cpp.dir/flags.make

CMakeFiles/kod_z_zajec_cpp.dir/main.cpp.obj: CMakeFiles/kod_z_zajec_cpp.dir/flags.make
CMakeFiles/kod_z_zajec_cpp.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\admin\Documents\Studia\Semestr II\ASD\zajecia 5\kod_z_zajec.cpp\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/kod_z_zajec_cpp.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\kod_z_zajec_cpp.dir\main.cpp.obj -c "C:\Users\admin\Documents\Studia\Semestr II\ASD\zajecia 5\kod_z_zajec.cpp\main.cpp"

CMakeFiles/kod_z_zajec_cpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kod_z_zajec_cpp.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\admin\Documents\Studia\Semestr II\ASD\zajecia 5\kod_z_zajec.cpp\main.cpp" > CMakeFiles\kod_z_zajec_cpp.dir\main.cpp.i

CMakeFiles/kod_z_zajec_cpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kod_z_zajec_cpp.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\admin\Documents\Studia\Semestr II\ASD\zajecia 5\kod_z_zajec.cpp\main.cpp" -o CMakeFiles\kod_z_zajec_cpp.dir\main.cpp.s

# Object files for target kod_z_zajec_cpp
kod_z_zajec_cpp_OBJECTS = \
"CMakeFiles/kod_z_zajec_cpp.dir/main.cpp.obj"

# External object files for target kod_z_zajec_cpp
kod_z_zajec_cpp_EXTERNAL_OBJECTS =

kod_z_zajec_cpp.exe: CMakeFiles/kod_z_zajec_cpp.dir/main.cpp.obj
kod_z_zajec_cpp.exe: CMakeFiles/kod_z_zajec_cpp.dir/build.make
kod_z_zajec_cpp.exe: CMakeFiles/kod_z_zajec_cpp.dir/linklibs.rsp
kod_z_zajec_cpp.exe: CMakeFiles/kod_z_zajec_cpp.dir/objects1.rsp
kod_z_zajec_cpp.exe: CMakeFiles/kod_z_zajec_cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\admin\Documents\Studia\Semestr II\ASD\zajecia 5\kod_z_zajec.cpp\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable kod_z_zajec_cpp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\kod_z_zajec_cpp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/kod_z_zajec_cpp.dir/build: kod_z_zajec_cpp.exe

.PHONY : CMakeFiles/kod_z_zajec_cpp.dir/build

CMakeFiles/kod_z_zajec_cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\kod_z_zajec_cpp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/kod_z_zajec_cpp.dir/clean

CMakeFiles/kod_z_zajec_cpp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\admin\Documents\Studia\Semestr II\ASD\zajecia 5\kod_z_zajec.cpp" "C:\Users\admin\Documents\Studia\Semestr II\ASD\zajecia 5\kod_z_zajec.cpp" "C:\Users\admin\Documents\Studia\Semestr II\ASD\zajecia 5\kod_z_zajec.cpp\cmake-build-debug" "C:\Users\admin\Documents\Studia\Semestr II\ASD\zajecia 5\kod_z_zajec.cpp\cmake-build-debug" "C:\Users\admin\Documents\Studia\Semestr II\ASD\zajecia 5\kod_z_zajec.cpp\cmake-build-debug\CMakeFiles\kod_z_zajec_cpp.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/kod_z_zajec_cpp.dir/depend

