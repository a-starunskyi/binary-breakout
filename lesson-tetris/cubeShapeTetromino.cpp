#include "cubeShapeTetromino.hpp"
#include "game.hpp"
#include "settings.hpp"

#include <iostream>

CubeShapeTetromino::CubeShapeTetromino()
{
    std::cout << " New class zShapeTetromino" << std::endl;
}

void CubeShapeTetromino::render()
{
    sf::RectangleShape arrBlock;


    arrBlock.setSize(sf::Vector2f(30.f, 30.f));
    arrBlock.setFillColor(sf::Color::Blue);


    for (int i = 0; i < cubeShape.size(); ++i)
    {
        for (int j = 0; j < cubeShape[i].size(); ++j)
        {
            if (cubeShape[i][j] != ' ')
            {
                std::cout << " fm" << std::endl;
                arrBlock.setPosition(sf::Vector2f(tetPosX + j * 30.f, tetPosY + i * 30.f));
                Game::getInstance().draw(arrBlock);

            }

        }

    }
}