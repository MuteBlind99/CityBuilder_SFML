file(GLOB_RECURSE SRC_FILES src/*.cc)
file(GLOB_RECURSE HEADER_FILES include/*.h)

add_library(game ${SRC_FILES} ${HEADER_FILES}
        ../core/src/tile.cc)

target_include_directories(game PUBLIC include/)

target_link_libraries(game PRIVATE core SFML::Graphics SFML::Window SFML::Audio SFML::System)