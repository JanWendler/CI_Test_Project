cmake_minimum_required (VERSION 3.10.3)

project (${PROJECT_NAME} LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_LEGACY_CYGWIN_WIN32 0)

include(CTest)

enable_testing()

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(test/lib/googletest)