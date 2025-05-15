//
// Created by forna on 14.05.2025.
//
#include "../include/game.h"

#include <SFML/Audio/Music.hpp>

#include "map_generator.h"
#include "resouce_manager.h"

namespace game {
    namespace {
        sf::RenderWindow _window;
        // sf::Texture _texture;
        // sf::Texture _textureBackground;
        // sf::Music _music;
        MapGenerator _mapGenerator;


        void Setup() {
            _window.create(sf::VideoMode({1600, 800}), "SFML Window");
            ResouceManager::Setup();
            //_texture.loadFromFile("assets/sprits/tile_0026.png");
            //_textureBackground.loadFromFile("/assets/sprits/1_DFDZR2pEtEChAatozyfzfA.png");
            //_music.openFromFile("assets/audio/2_23 AM.wav");
            _mapGenerator.SetTiles();
        }
    }



    void Loop() {

        Setup();
        // Load a music to play

        //_music.play();

        // // Create a graphical sprite to display the background
        // sf::Sprite _spriteBackground(_textureBackground);
        //
        // sf::Vector2u textureSize = _textureBackground.getSize();
        // sf::Vector2u windowSize = _window.getSize();
        // _spriteBackground.setScale(sf::Vector2f(static_cast<float>(windowSize.x) / textureSize.x,
        //                                         static_cast<float>(windowSize.y) / textureSize.y));
        //
        // // Create a graphical text to display
        // const sf::Font _font("assets/fonts/Hardcore Imperial.ttf");
        // sf::Text _text(_font, "Conglatulation Morons", 50);
        // _text.setPosition(sf::Vector2f(300, 100));
        // //
        // sf::Sprite _sprite(_texture);
        // _sprite.setScale(sf::Vector2f(4.f, 4.f));

        while (_window.isOpen()) {
            while (const std::optional event = _window.pollEvent()) {
                if (event->is<sf::Event::Closed>()) {
                    _window.close();
                }
            }
            //Play the music

            _window.clear();
            //_window.draw(_spriteBackground);
            //_window.draw(_sprite);
            //_window.draw(_text);
            _window.draw(_mapGenerator);
            _window.display();
        }
    }
}
