cmake_minimum_required(VERSION 3.10.0)
project(passGen)

#including the headers
include_directories(${PROJECT_SOURCE_DIR}/inc)

#compiler flags
set(CMAKE_CXX_FLAGS "-std=c++17 -Wall -Wextra -Werror -g")

#Its for the sublime text, without these, it doesnt find the pass.h
SET( CMAKE_EXPORT_COMPILE_COMMANDS ON )

#IF( EXISTS "${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json" )
#  EXECUTE_PROCESS( COMMAND ${CMAKE_COMMAND} -E copy_if_different
#    ${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json
#    ${CMAKE_CURRENT_SOURCE_DIR}/compile_commands.json
#  )
#ENDIF()


#set sources -> Better to be explicit
set(SRC ${PROJECT_SOURCE_DIR}/src/pass.cpp
        ${PROJECT_SOURCE_DIR}/src/main.cpp
)

#creating exe
add_executable(passGen ${SRC})
