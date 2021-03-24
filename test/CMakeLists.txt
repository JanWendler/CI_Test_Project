cmake_minimum_required (VERSION 3.10.3)

include(GoogleTest)

add_subdirectory(lib/googletest)

set(SOURCE_FILES test.cpp)

add_executable(tests ${SOURCE_FILES})

target_compile_options(tests PRIVATE -Werror -Wall -Wextra)

target_include_directories(tests PUBLIC ../src lib/googletest/googletest/include)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

target_link_libraries(tests PUBLIC gtest gtest_main)

gtest_discover_tests(tests)
