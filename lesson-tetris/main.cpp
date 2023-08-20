#include "game.hpp"
#include "Tetromino.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>


int main()
{
	Game::getInstance().run();
	return 0;
}