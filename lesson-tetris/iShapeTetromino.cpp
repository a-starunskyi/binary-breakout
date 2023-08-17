#include "iShapeTetromino.hpp"
#include "game.hpp"
#include "settings.hpp"

#include <iostream>

 IShapeTetromino::IShapeTetromino()
{
     std::cout << " New class IShapeTetromino" << std::endl;
}

void IShapeTetromino::render()
{
    sf::RectangleShape arrBlock;

   
    arrBlock.setSize(sf::Vector2f(30.f, 30.f));
    arrBlock.setFillColor(sf::Color::Red);


    for (int i = 0; i < iShape.size(); ++i) 
    {
        for (int j = 0; j < iShape[i].size(); ++j)
        {
            if (iShape[i][j] != ' ')
            { 
                std::cout << " fm" << std::endl;
                arrBlock.setPosition(sf::Vector2f(tetPosX + j * 30.f, tetPosY  + i * 30.f));
                Game::getInstance().draw(arrBlock);

            }
           
        }
 
    }
}

