//
// Created by forna on 14.05.2025.
//
#include "game.h"

Game::Game() {
    _window.create(sf::VideoMode({800, 600}), "SFML Window");

    _texture.loadFromFile("../assets/sprits/tile_0026.png");
    // _sprite.setTexture(_texture);
    // _sprite.setScale(sf::Vector2f(4.f, 4.f));
}

void Game::Loop() {

    sf::Sprite _sprite(_texture);

    while (_window.isOpen()) {
        while (const std::optional event = _window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
               _window.close();
            }
        }
        _window.clear();
        _window.draw(_sprite);
        _window.display();
    }
}
