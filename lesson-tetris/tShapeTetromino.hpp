#pragma once

#include "tetromino.hpp"
#include <SFML/Graphics.hpp>

class TShapeTetromino : public Tetromino
{
public:

    TShapeTetromino();

    void render();

private:

    const int lenght = 4;

    std::vector<std::vector<char>> tShape = {
        {'#', '#', '#',},
        {' ', '#', ' ',},
    };


};