#pragma once

#include "Board.hpp"
#include "Tetromino.hpp"
#include <SFML/Graphics.hpp>

class TetrominoController
{
public:
	TetrominoController(Board& board);
	TetrominoController();
	bool createTetromino(Tetromino::TetrominoShape shape, sf::Color color);
	void tick();
	void render(sf::RenderWindow& window);

private:
	Board& m_board;
	Tetromino* m_currentTetromino = nullptr;

	Tetromino* generateRandomTetromino(sf::Vector2f position, sf::Color color);
};

