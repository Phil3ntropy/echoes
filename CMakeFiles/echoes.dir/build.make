# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/weltrusten/philentropy/echoes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/weltrusten/philentropy/echoes

# Include any dependencies generated for this target.
include CMakeFiles/echoes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/echoes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/echoes.dir/flags.make

CMakeFiles/echoes.dir/src/main.cpp.o: CMakeFiles/echoes.dir/flags.make
CMakeFiles/echoes.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/weltrusten/philentropy/echoes/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/echoes.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/echoes.dir/src/main.cpp.o -c /home/weltrusten/philentropy/echoes/src/main.cpp

CMakeFiles/echoes.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/echoes.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/weltrusten/philentropy/echoes/src/main.cpp > CMakeFiles/echoes.dir/src/main.cpp.i

CMakeFiles/echoes.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/echoes.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/weltrusten/philentropy/echoes/src/main.cpp -o CMakeFiles/echoes.dir/src/main.cpp.s

CMakeFiles/echoes.dir/src/Installer.cpp.o: CMakeFiles/echoes.dir/flags.make
CMakeFiles/echoes.dir/src/Installer.cpp.o: src/Installer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/weltrusten/philentropy/echoes/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/echoes.dir/src/Installer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/echoes.dir/src/Installer.cpp.o -c /home/weltrusten/philentropy/echoes/src/Installer.cpp

CMakeFiles/echoes.dir/src/Installer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/echoes.dir/src/Installer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/weltrusten/philentropy/echoes/src/Installer.cpp > CMakeFiles/echoes.dir/src/Installer.cpp.i

CMakeFiles/echoes.dir/src/Installer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/echoes.dir/src/Installer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/weltrusten/philentropy/echoes/src/Installer.cpp -o CMakeFiles/echoes.dir/src/Installer.cpp.s

CMakeFiles/echoes.dir/src/Echoes.cpp.o: CMakeFiles/echoes.dir/flags.make
CMakeFiles/echoes.dir/src/Echoes.cpp.o: src/Echoes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/weltrusten/philentropy/echoes/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/echoes.dir/src/Echoes.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/echoes.dir/src/Echoes.cpp.o -c /home/weltrusten/philentropy/echoes/src/Echoes.cpp

CMakeFiles/echoes.dir/src/Echoes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/echoes.dir/src/Echoes.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/weltrusten/philentropy/echoes/src/Echoes.cpp > CMakeFiles/echoes.dir/src/Echoes.cpp.i

CMakeFiles/echoes.dir/src/Echoes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/echoes.dir/src/Echoes.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/weltrusten/philentropy/echoes/src/Echoes.cpp -o CMakeFiles/echoes.dir/src/Echoes.cpp.s

# Object files for target echoes
echoes_OBJECTS = \
"CMakeFiles/echoes.dir/src/main.cpp.o" \
"CMakeFiles/echoes.dir/src/Installer.cpp.o" \
"CMakeFiles/echoes.dir/src/Echoes.cpp.o"

# External object files for target echoes
echoes_EXTERNAL_OBJECTS =

echoes: CMakeFiles/echoes.dir/src/main.cpp.o
echoes: CMakeFiles/echoes.dir/src/Installer.cpp.o
echoes: CMakeFiles/echoes.dir/src/Echoes.cpp.o
echoes: CMakeFiles/echoes.dir/build.make
echoes: CMakeFiles/echoes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/weltrusten/philentropy/echoes/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable echoes"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/echoes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/echoes.dir/build: echoes

.PHONY : CMakeFiles/echoes.dir/build

CMakeFiles/echoes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/echoes.dir/cmake_clean.cmake
.PHONY : CMakeFiles/echoes.dir/clean

CMakeFiles/echoes.dir/depend:
	cd /home/weltrusten/philentropy/echoes && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/weltrusten/philentropy/echoes /home/weltrusten/philentropy/echoes /home/weltrusten/philentropy/echoes /home/weltrusten/philentropy/echoes /home/weltrusten/philentropy/echoes/CMakeFiles/echoes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/echoes.dir/depend

