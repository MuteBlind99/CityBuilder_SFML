//
// Created by forna on 14.05.2025.
//

#ifndef GAME_H
#define GAME_H
#include <SFML/Graphics.hpp>

class Game {
    public:

    Game();
    void Loop();

    private:

    sf::RenderWindow _window;
    sf::Texture _texture;

};
#endif //GAME_H
