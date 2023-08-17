#include "zShapeTetromino.hpp"
#include "game.hpp"
#include "settings.hpp"

#include <iostream>

ZShapeTetromino::ZShapeTetromino()
{
    std::cout << " New class zShapeTetromino" << std::endl;
}

void ZShapeTetromino::render()
{
    sf::RectangleShape arrBlock;


    arrBlock.setSize(sf::Vector2f(30.f, 30.f));
    arrBlock.setFillColor(sf::Color::Green);


    for (int i = 0; i < zShape.size(); ++i)
    {
        for (int j = 0; j < zShape[i].size(); ++j)
        {
            if (zShape[i][j] != ' ')
            {
                std::cout << " fm" << std::endl;
                arrBlock.setPosition(sf::Vector2f(tetPosX + j * 30.f, tetPosY + i * 30.f));
                Game::getInstance().draw(arrBlock);

            }

        }

    }
}

