#include <SFML/Graphics.hpp>
#include "map_generator.h"

//
// Created by forna on 15.05.2025.
//

void MapGenerator::SetTiles() {
    for (int y = 0; y < mapHeight; ++y) {
        for (int x = 0; x < mapWidth; ++x) {

            tiles_.emplace_back(sf::Vector2f(x * tileSize.x, y * tileSize.y));
        }
    }
}

void MapGenerator::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    for (const auto &tile : tiles_) {
        target.draw(tile, states);
    }
}
