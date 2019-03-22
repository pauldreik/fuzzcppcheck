#cppcheck fuzzer
#by paul dreik 20190322
cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(cppcheckfuzzer CXX )

#upstream cppcheck files
file(GLOB SRC_FILES cppcheck/lib/*.cpp)
add_library(libcppcheck ${SRC_FILES})
target_include_directories(libcppcheck PUBLIC cppcheck/lib/)

#tinyxml2 is needed.
file(GLOB SRC_FILES cppcheck/externals/tinyxml/*.cpp)
add_library(libtinyxml ${SRC_FILES})
target_include_directories(libtinyxml PUBLIC cppcheck/externals/tinyxml/)

#simplecpp as well.
file(GLOB SRC_FILES cppcheck/externals/simplecpp/*.cpp)
add_library(libsimplecpp ${SRC_FILES})
target_include_directories(libsimplecpp PUBLIC cppcheck/externals/simplecpp/)

target_link_libraries(libcppcheck PRIVATE libtinyxml)
target_link_libraries(libcppcheck PRIVATE libsimplecpp)

#support files for fuzzing
SET(SRC_FILES src/slurp.cpp)
add_library(fuzzsupport ${SRC_FILES})
target_include_directories(fuzzsupport PUBLIC src)


#it's kind of tricky to allow building both with libfuzzer
#and afl. If one pass CXX=clang++ CXXFLAGS=-fsanitize=fuzzer
#to cmake, we won't pass the initial test (compiler can't make simple file).
#and if we add it here, it will fail building the afl target, because
#it already has a main() and -fsanitize=fuzzer will try to link in another one.
#
# Therefore:
# CXX=afl-g++ cmake -Duselibfuzzer=off ..
# builds the afl fuzzer target and
# CXX=clang++ cmake -Duselibfuzzer=on ..
# builds the libFuzzer target.

option(uselibfuzzer "use libfuzzer (instead of afl)" OFF)

if(uselibfuzzer)
 #fuzz target (libfuzzer)
 set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=fuzzer")
 add_executable(libfuzzer_target src/libfuzzer_entry.cpp)
 target_link_libraries(libfuzzer_target fuzzsupport)
 target_link_libraries(libfuzzer_target libcppcheck)
else()
 # build the fuzz target for afl
 add_executable(afl_target src/afl_entry.cpp)
 target_link_libraries(afl_target fuzzsupport)
 target_link_libraries(afl_target libcppcheck)
endif()

