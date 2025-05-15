//
// Created by forna on 15.05.2025.
//

#ifndef TILES_H
#define TILES_H
#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

class Tile : public sf::Drawable {
private:
    sf::Texture _tileset;
    std::optional<sf::Sprite> tile;

public:
    Tile(sf::Vector2f pos);

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};
#endif //TILES_H
