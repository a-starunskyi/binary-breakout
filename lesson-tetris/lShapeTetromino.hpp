#pragma once

#include "tetromino.hpp"
#include <SFML/Graphics.hpp>

class LShapeTetromino : public Tetromino
{
public:

    LShapeTetromino();

    void render();

private:

    const int lenght = 4;

    std::vector<std::vector<char>> lShape = {
        {'#', '#','#',},
        {' ', ' ','#',},
    };


};