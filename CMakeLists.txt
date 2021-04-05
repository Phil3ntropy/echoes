cmake_minimum_required(VERSION 3.0)

project(echoes)

add_executable(echoes src/main.cpp src/Installer.cpp src/Echoes.cpp)

install(TARGETS echoes RUNTIME DESTINATION bin)
