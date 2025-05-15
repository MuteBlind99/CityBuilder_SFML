//
// Created by forna on 15.05.2025.
//

#ifndef MAP_H
#define MAP_H
#include "tile.h"

class MapGenerator: public sf::Drawable{
    const int mapWidth = 1600;
    const int mapHeight = 800;
    sf::Vector2<int> tileSize = sf::Vector2<int>(16, 16);
    std::vector<Tile> tiles_;

public:
    void SetTiles();
    enum class TileType {
        HERBE = 0,
        SOL = 1,
        MUR = 2
    };
    protected:
    void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};
#endif //MAP_H
