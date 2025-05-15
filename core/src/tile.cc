#include "tile.h"

#include "resouce_manager.h"
#include "resource_sprite.h"

Tile::Tile(sf::Vector2f pos)
{
    tile=sf::Sprite(ResouceManager::Sprite(ResourceSprite::TextureType::kFloor));
}

void Tile::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(*tile, states);
}
