# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /home/sam/Templates/clion-2019.3.5/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/sam/Templates/clion-2019.3.5/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sam/CLionProjects/arcton_0_1_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sam/CLionProjects/arcton_0_1_1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/arcton_0_1_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/arcton_0_1_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/arcton_0_1_1.dir/flags.make

CMakeFiles/arcton_0_1_1.dir/main.cpp.o: CMakeFiles/arcton_0_1_1.dir/flags.make
CMakeFiles/arcton_0_1_1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sam/CLionProjects/arcton_0_1_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/arcton_0_1_1.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/arcton_0_1_1.dir/main.cpp.o -c /home/sam/CLionProjects/arcton_0_1_1/main.cpp

CMakeFiles/arcton_0_1_1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arcton_0_1_1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sam/CLionProjects/arcton_0_1_1/main.cpp > CMakeFiles/arcton_0_1_1.dir/main.cpp.i

CMakeFiles/arcton_0_1_1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arcton_0_1_1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sam/CLionProjects/arcton_0_1_1/main.cpp -o CMakeFiles/arcton_0_1_1.dir/main.cpp.s

CMakeFiles/arcton_0_1_1.dir/display.cpp.o: CMakeFiles/arcton_0_1_1.dir/flags.make
CMakeFiles/arcton_0_1_1.dir/display.cpp.o: ../display.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sam/CLionProjects/arcton_0_1_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/arcton_0_1_1.dir/display.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/arcton_0_1_1.dir/display.cpp.o -c /home/sam/CLionProjects/arcton_0_1_1/display.cpp

CMakeFiles/arcton_0_1_1.dir/display.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arcton_0_1_1.dir/display.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sam/CLionProjects/arcton_0_1_1/display.cpp > CMakeFiles/arcton_0_1_1.dir/display.cpp.i

CMakeFiles/arcton_0_1_1.dir/display.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arcton_0_1_1.dir/display.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sam/CLionProjects/arcton_0_1_1/display.cpp -o CMakeFiles/arcton_0_1_1.dir/display.cpp.s

CMakeFiles/arcton_0_1_1.dir/shader.cpp.o: CMakeFiles/arcton_0_1_1.dir/flags.make
CMakeFiles/arcton_0_1_1.dir/shader.cpp.o: ../shader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sam/CLionProjects/arcton_0_1_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/arcton_0_1_1.dir/shader.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/arcton_0_1_1.dir/shader.cpp.o -c /home/sam/CLionProjects/arcton_0_1_1/shader.cpp

CMakeFiles/arcton_0_1_1.dir/shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arcton_0_1_1.dir/shader.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sam/CLionProjects/arcton_0_1_1/shader.cpp > CMakeFiles/arcton_0_1_1.dir/shader.cpp.i

CMakeFiles/arcton_0_1_1.dir/shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arcton_0_1_1.dir/shader.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sam/CLionProjects/arcton_0_1_1/shader.cpp -o CMakeFiles/arcton_0_1_1.dir/shader.cpp.s

CMakeFiles/arcton_0_1_1.dir/mesh.cpp.o: CMakeFiles/arcton_0_1_1.dir/flags.make
CMakeFiles/arcton_0_1_1.dir/mesh.cpp.o: ../mesh.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sam/CLionProjects/arcton_0_1_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/arcton_0_1_1.dir/mesh.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/arcton_0_1_1.dir/mesh.cpp.o -c /home/sam/CLionProjects/arcton_0_1_1/mesh.cpp

CMakeFiles/arcton_0_1_1.dir/mesh.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arcton_0_1_1.dir/mesh.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sam/CLionProjects/arcton_0_1_1/mesh.cpp > CMakeFiles/arcton_0_1_1.dir/mesh.cpp.i

CMakeFiles/arcton_0_1_1.dir/mesh.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arcton_0_1_1.dir/mesh.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sam/CLionProjects/arcton_0_1_1/mesh.cpp -o CMakeFiles/arcton_0_1_1.dir/mesh.cpp.s

CMakeFiles/arcton_0_1_1.dir/stb_image.c.o: CMakeFiles/arcton_0_1_1.dir/flags.make
CMakeFiles/arcton_0_1_1.dir/stb_image.c.o: ../stb_image.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sam/CLionProjects/arcton_0_1_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/arcton_0_1_1.dir/stb_image.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/arcton_0_1_1.dir/stb_image.c.o   -c /home/sam/CLionProjects/arcton_0_1_1/stb_image.c

CMakeFiles/arcton_0_1_1.dir/stb_image.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/arcton_0_1_1.dir/stb_image.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/sam/CLionProjects/arcton_0_1_1/stb_image.c > CMakeFiles/arcton_0_1_1.dir/stb_image.c.i

CMakeFiles/arcton_0_1_1.dir/stb_image.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/arcton_0_1_1.dir/stb_image.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/sam/CLionProjects/arcton_0_1_1/stb_image.c -o CMakeFiles/arcton_0_1_1.dir/stb_image.c.s

CMakeFiles/arcton_0_1_1.dir/texture.cpp.o: CMakeFiles/arcton_0_1_1.dir/flags.make
CMakeFiles/arcton_0_1_1.dir/texture.cpp.o: ../texture.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sam/CLionProjects/arcton_0_1_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/arcton_0_1_1.dir/texture.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/arcton_0_1_1.dir/texture.cpp.o -c /home/sam/CLionProjects/arcton_0_1_1/texture.cpp

CMakeFiles/arcton_0_1_1.dir/texture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arcton_0_1_1.dir/texture.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sam/CLionProjects/arcton_0_1_1/texture.cpp > CMakeFiles/arcton_0_1_1.dir/texture.cpp.i

CMakeFiles/arcton_0_1_1.dir/texture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arcton_0_1_1.dir/texture.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sam/CLionProjects/arcton_0_1_1/texture.cpp -o CMakeFiles/arcton_0_1_1.dir/texture.cpp.s

# Object files for target arcton_0_1_1
arcton_0_1_1_OBJECTS = \
"CMakeFiles/arcton_0_1_1.dir/main.cpp.o" \
"CMakeFiles/arcton_0_1_1.dir/display.cpp.o" \
"CMakeFiles/arcton_0_1_1.dir/shader.cpp.o" \
"CMakeFiles/arcton_0_1_1.dir/mesh.cpp.o" \
"CMakeFiles/arcton_0_1_1.dir/stb_image.c.o" \
"CMakeFiles/arcton_0_1_1.dir/texture.cpp.o"

# External object files for target arcton_0_1_1
arcton_0_1_1_EXTERNAL_OBJECTS =

arcton_0_1_1: CMakeFiles/arcton_0_1_1.dir/main.cpp.o
arcton_0_1_1: CMakeFiles/arcton_0_1_1.dir/display.cpp.o
arcton_0_1_1: CMakeFiles/arcton_0_1_1.dir/shader.cpp.o
arcton_0_1_1: CMakeFiles/arcton_0_1_1.dir/mesh.cpp.o
arcton_0_1_1: CMakeFiles/arcton_0_1_1.dir/stb_image.c.o
arcton_0_1_1: CMakeFiles/arcton_0_1_1.dir/texture.cpp.o
arcton_0_1_1: CMakeFiles/arcton_0_1_1.dir/build.make
arcton_0_1_1: /usr/lib/x86_64-linux-gnu/libOpenGL.so
arcton_0_1_1: /usr/lib/x86_64-linux-gnu/libGLX.so
arcton_0_1_1: /usr/lib/x86_64-linux-gnu/libGLU.so
arcton_0_1_1: /usr/lib/x86_64-linux-gnu/libGLEW.so
arcton_0_1_1: CMakeFiles/arcton_0_1_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sam/CLionProjects/arcton_0_1_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable arcton_0_1_1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/arcton_0_1_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/arcton_0_1_1.dir/build: arcton_0_1_1

.PHONY : CMakeFiles/arcton_0_1_1.dir/build

CMakeFiles/arcton_0_1_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/arcton_0_1_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/arcton_0_1_1.dir/clean

CMakeFiles/arcton_0_1_1.dir/depend:
	cd /home/sam/CLionProjects/arcton_0_1_1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sam/CLionProjects/arcton_0_1_1 /home/sam/CLionProjects/arcton_0_1_1 /home/sam/CLionProjects/arcton_0_1_1/cmake-build-debug /home/sam/CLionProjects/arcton_0_1_1/cmake-build-debug /home/sam/CLionProjects/arcton_0_1_1/cmake-build-debug/CMakeFiles/arcton_0_1_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/arcton_0_1_1.dir/depend
