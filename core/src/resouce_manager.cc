#include "resource_sprite.h"
//
// Created by forna on 15.05.2025.
//
namespace ResouceManager {
    namespace {
        ResourceSprite resource_sprite;

    }
    void Setup() {
        resource_sprite.Setup();
    }

    sf::Texture &Sprite(const ResourceSprite::TextureType type) {
        return resource_sprite.GetTexture(type);
    }
}