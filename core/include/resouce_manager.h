//
// Created by forna on 15.05.2025.
//

#ifndef RESOUCE_MANGER_H
#define RESOUCE_MANGER_H
#include "resource_sprite.h"

namespace ResouceManager {
    void Setup();
    sf::Texture& Sprite(const ResourceSprite::TextureType type);

}
#endif //RESOUCE_MANGER_H
