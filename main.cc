
#include "game.h"
#include  "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.

    Game game;
    // const sf::Texture texture2("../assets/sprits/1_DFDZR2pEtEChAatozyfzfA.png");
    // sf::Sprite background(texture2);
    //
    //
    // // Load a music to play
    // sf::Music music("nice_music.ogg");

    // Play the music
    //music.play();
    game.Loop();



    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}
