cmake_minimum_required(VERSION 3.25)
project(CPP_Games)

set(CMAKE_CXX_STANDARD 11)
#set(SOURCES TicTacToe.cpp tinytetris-commented.cpp main.cpp)
set(SOURCES TicTacToe.cpp main.cpp)

add_executable(CPP_Games ${SOURCES})

target_include_directories(CPP_Games PRIVATE ${PROJECT_SOURCE_DIR}/include)
