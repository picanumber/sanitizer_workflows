set(CMAKE_PROJECT_VERSION "1")
set(CMAKE_PROJECT_VERSION_MAJOR "1")
set(CMAKE_PROJECT_VERSION_MINOR "0")
set(CMAKE_PROJECT_VERSION_PATCH "0")
set(CMAKE_VERSION_STRING "${CMAKE_PROJECT_VERSION_MAJOR}.${CMAKE_PROJECT_VERSION_MINOR}.${CMAKE_PROJECT_VERSION_PATCH}")

cmake_policy(SET CMP0048 NEW)
project(sanitizer_workflows VERSION "${LIB_VERSION_STRING}" LANGUAGES CXX)
 
cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17) 
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) 

list(INSERT CMAKE_MODULE_PATH 0 ${CMAKE_SOURCE_DIR}/cmake/finders)

set(THREADS_PREFER_PTHREAD_FLAG ON)                                                                                  
find_package(Threads REQUIRED)

SET(USED_LIBS Threads::Threads)

add_compile_options(-Wall -Wextra -pedantic)

add_subdirectory(test)
