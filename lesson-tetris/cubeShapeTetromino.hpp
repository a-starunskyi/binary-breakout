#pragma once

#include "tetromino.hpp"
#include <SFML/Graphics.hpp>

class CubeShapeTetromino : public Tetromino
{
public:

    CubeShapeTetromino();

    void render();

private:

    const int lenght = 4;

    std::vector<std::vector<char>> cubeShape = {
        {'#', '#',},
        {'#', '#',},
    };


};