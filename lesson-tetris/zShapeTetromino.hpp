#pragma once

#include "tetromino.hpp"
#include <SFML/Graphics.hpp>

class ZShapeTetromino : public Tetromino
{
public:

    ZShapeTetromino();

    void render();

private:

    const int lenght = 4;

    std::vector<std::vector<char>> zShape = {
        {'#', '#', ' ',},
        {' ', '#', '#',},
    };


};