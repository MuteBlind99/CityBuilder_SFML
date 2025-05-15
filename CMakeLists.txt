cmake_minimum_required(VERSION 3.31)
project(CityBuilder)

set(CMAKE_CXX_STANDARD 20)


find_package(SFML COMPONENTS Graphics Window Audio System REQUIRED)

add_subdirectory(core/)
add_subdirectory(game/)

file(COPY ${CMAKE_SOURCE_DIR}/assets DESTINATION ${CMAKE_BINARY_DIR})

add_executable(CityBuilder main.cc)

target_link_libraries(CityBuilder PRIVATE game core SFML::Graphics SFML::Window SFML::Audio SFML::System)