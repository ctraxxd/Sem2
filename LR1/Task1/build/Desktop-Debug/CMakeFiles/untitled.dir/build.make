# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.31.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.31.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/build/Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/untitled.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled.dir/flags.make

untitled_autogen/timestamp: /Users/ctraxxd/Qt/6.8.2/macos/libexec/moc
untitled_autogen/timestamp: /Users/ctraxxd/Qt/6.8.2/macos/libexec/uic
untitled_autogen/timestamp: CMakeFiles/untitled.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target untitled"
	/usr/local/Cellar/cmake/3.31.0/bin/cmake -E cmake_autogen /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/build/Desktop-Debug/CMakeFiles/untitled_autogen.dir/AutogenInfo.json Debug
	/usr/local/Cellar/cmake/3.31.0/bin/cmake -E touch /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/build/Desktop-Debug/untitled_autogen/timestamp

CMakeFiles/untitled.dir/codegen:
.PHONY : CMakeFiles/untitled.dir/codegen

CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.o: untitled_autogen/mocs_compilation.cpp
CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.o: CMakeFiles/untitled.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.o -MF CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.o -c /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/build/Desktop-Debug/untitled_autogen/mocs_compilation.cpp

CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/build/Desktop-Debug/untitled_autogen/mocs_compilation.cpp > CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.i

CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/build/Desktop-Debug/untitled_autogen/mocs_compilation.cpp -o CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.s

CMakeFiles/untitled.dir/main.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/main.cpp.o: /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/main.cpp
CMakeFiles/untitled.dir/main.cpp.o: CMakeFiles/untitled.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/untitled.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/untitled.dir/main.cpp.o -MF CMakeFiles/untitled.dir/main.cpp.o.d -o CMakeFiles/untitled.dir/main.cpp.o -c /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/main.cpp

CMakeFiles/untitled.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/untitled.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/main.cpp > CMakeFiles/untitled.dir/main.cpp.i

CMakeFiles/untitled.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/main.cpp -o CMakeFiles/untitled.dir/main.cpp.s

CMakeFiles/untitled.dir/mainwindow.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/mainwindow.cpp.o: /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/mainwindow.cpp
CMakeFiles/untitled.dir/mainwindow.cpp.o: CMakeFiles/untitled.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/untitled.dir/mainwindow.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/untitled.dir/mainwindow.cpp.o -MF CMakeFiles/untitled.dir/mainwindow.cpp.o.d -o CMakeFiles/untitled.dir/mainwindow.cpp.o -c /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/mainwindow.cpp

CMakeFiles/untitled.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/untitled.dir/mainwindow.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/mainwindow.cpp > CMakeFiles/untitled.dir/mainwindow.cpp.i

CMakeFiles/untitled.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/mainwindow.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/mainwindow.cpp -o CMakeFiles/untitled.dir/mainwindow.cpp.s

CMakeFiles/untitled.dir/figurewindow.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/figurewindow.cpp.o: /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/figurewindow.cpp
CMakeFiles/untitled.dir/figurewindow.cpp.o: CMakeFiles/untitled.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/untitled.dir/figurewindow.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/untitled.dir/figurewindow.cpp.o -MF CMakeFiles/untitled.dir/figurewindow.cpp.o.d -o CMakeFiles/untitled.dir/figurewindow.cpp.o -c /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/figurewindow.cpp

CMakeFiles/untitled.dir/figurewindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/untitled.dir/figurewindow.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/figurewindow.cpp > CMakeFiles/untitled.dir/figurewindow.cpp.i

CMakeFiles/untitled.dir/figurewindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/figurewindow.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/figurewindow.cpp -o CMakeFiles/untitled.dir/figurewindow.cpp.s

CMakeFiles/untitled.dir/carwindow.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/carwindow.cpp.o: /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/carwindow.cpp
CMakeFiles/untitled.dir/carwindow.cpp.o: CMakeFiles/untitled.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/untitled.dir/carwindow.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/untitled.dir/carwindow.cpp.o -MF CMakeFiles/untitled.dir/carwindow.cpp.o.d -o CMakeFiles/untitled.dir/carwindow.cpp.o -c /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/carwindow.cpp

CMakeFiles/untitled.dir/carwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/untitled.dir/carwindow.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/carwindow.cpp > CMakeFiles/untitled.dir/carwindow.cpp.i

CMakeFiles/untitled.dir/carwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/carwindow.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/carwindow.cpp -o CMakeFiles/untitled.dir/carwindow.cpp.s

CMakeFiles/untitled.dir/moverect.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/moverect.cpp.o: /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/moverect.cpp
CMakeFiles/untitled.dir/moverect.cpp.o: CMakeFiles/untitled.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/untitled.dir/moverect.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/untitled.dir/moverect.cpp.o -MF CMakeFiles/untitled.dir/moverect.cpp.o.d -o CMakeFiles/untitled.dir/moverect.cpp.o -c /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/moverect.cpp

CMakeFiles/untitled.dir/moverect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/untitled.dir/moverect.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/moverect.cpp > CMakeFiles/untitled.dir/moverect.cpp.i

CMakeFiles/untitled.dir/moverect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/moverect.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/moverect.cpp -o CMakeFiles/untitled.dir/moverect.cpp.s

# Object files for target untitled
untitled_OBJECTS = \
"CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/untitled.dir/main.cpp.o" \
"CMakeFiles/untitled.dir/mainwindow.cpp.o" \
"CMakeFiles/untitled.dir/figurewindow.cpp.o" \
"CMakeFiles/untitled.dir/carwindow.cpp.o" \
"CMakeFiles/untitled.dir/moverect.cpp.o"

# External object files for target untitled
untitled_EXTERNAL_OBJECTS =

untitled.app/Contents/MacOS/untitled: CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.o
untitled.app/Contents/MacOS/untitled: CMakeFiles/untitled.dir/main.cpp.o
untitled.app/Contents/MacOS/untitled: CMakeFiles/untitled.dir/mainwindow.cpp.o
untitled.app/Contents/MacOS/untitled: CMakeFiles/untitled.dir/figurewindow.cpp.o
untitled.app/Contents/MacOS/untitled: CMakeFiles/untitled.dir/carwindow.cpp.o
untitled.app/Contents/MacOS/untitled: CMakeFiles/untitled.dir/moverect.cpp.o
untitled.app/Contents/MacOS/untitled: CMakeFiles/untitled.dir/build.make
untitled.app/Contents/MacOS/untitled: /Users/ctraxxd/Qt/6.8.2/macos/lib/QtWidgets.framework/Versions/A/QtWidgets
untitled.app/Contents/MacOS/untitled: /Users/ctraxxd/Qt/6.8.2/macos/lib/QtGui.framework/Versions/A/QtGui
untitled.app/Contents/MacOS/untitled: /Users/ctraxxd/Qt/6.8.2/macos/lib/QtCore.framework/Versions/A/QtCore
untitled.app/Contents/MacOS/untitled: CMakeFiles/untitled.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable untitled.app/Contents/MacOS/untitled"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled.dir/build: untitled.app/Contents/MacOS/untitled
.PHONY : CMakeFiles/untitled.dir/build

CMakeFiles/untitled.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled.dir/clean

CMakeFiles/untitled.dir/depend: untitled_autogen/timestamp
	cd /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/build/Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1 /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1 /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/build/Desktop-Debug /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/build/Desktop-Debug /Users/ctraxxd/Documents/453502/OAiP2/LR1/Task1/build/Desktop-Debug/CMakeFiles/untitled.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/untitled.dir/depend

