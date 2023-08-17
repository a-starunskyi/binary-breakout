#pragma once

#include "tetromino.hpp"
#include <SFML/Graphics.hpp>

class IShapeTetromino: public Tetromino
{
public:

    IShapeTetromino();

    void render();

private:

    const int lenght = 4;

    std::vector<std::vector<char>> iShape = {

        {'#', '#', '#', '#'},
    };


};