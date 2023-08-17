#include "lShapeTetromino.hpp"
#include "game.hpp"
#include "settings.hpp"

#include <iostream>

LShapeTetromino::LShapeTetromino()
{
    std::cout << " New class zShapeTetromino" << std::endl;
}

void LShapeTetromino::render()
{
    sf::RectangleShape arrBlock;


    arrBlock.setSize(sf::Vector2f(30.f, 30.f));
    arrBlock.setFillColor(sf::Color::Yellow);


    for (int i = 0; i < lShape.size(); ++i)
    {
        for (int j = 0; j < lShape[i].size(); ++j)
        {
            if (lShape[i][j] != ' ')
            {
                std::cout << " fm" << std::endl;
                arrBlock.setPosition(sf::Vector2f(tetPosX + j * 30.f, tetPosY + i * 30.f));
                Game::getInstance().draw(arrBlock);

            }

        }

    }
}