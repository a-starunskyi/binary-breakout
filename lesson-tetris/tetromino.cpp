#include "tetromino.hpp"
#include "settings.hpp"

#include <iostream>

Tetromino::Tetromino()
{ 
	tetPosX = setting::WINDOW_WIDTH / 2;
	tetPosY = setting::WINDOW_HEIGHT / 2;

	std::cout << "New Class Tetromino"<<std::endl;
};
