file(GLOB_RECURSE SRC_FILES src/*.cc)
file(GLOB_RECURSE HEADER_FILES include/*.h)

add_library(core ${SRC_FILES} ${HEADER_FILES}
        include/tile.h
        include/resource_sprite.h
        src/resource_sprite.cc
        src/resouce_manager.cc
        include/resouce_manager.h)
target_include_directories(core PUBLIC include/)

target_link_libraries(core PRIVATE SFML::Graphics SFML::Window SFML::Audio SFML::System)