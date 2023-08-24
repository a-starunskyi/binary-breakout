#include "tetromino.hpp"
#include "settings.hpp"

#include <iostream>

Tetromino::Tetromino()
{ 
	tetPosX = setting::WINDOW_WIDTH / 2;
	tetPosY = setting::WINDOW_HEIGHT - setting::WINDOW_HEIGHT;

	std::cout << "New Class Tetromino"<<std::endl;
};
