#pragma once

#include "Tetromino.hpp"
#include <SFML/Graphics.hpp>

class Board
{
public:
	static const int BOARD_WIDTH = 600;
	static const int BOARD_HEIGHT = 600;
	static const float CELL_SIZE;

	Board();
	void tick();
	void render(sf::RenderWindow& window);
	void placeTetromino(const Tetromino& tetromino);
	void clearCompletedLines();

private:
	struct CellData
	{
		bool occupied = false;
		sf::Color color = sf::Color::Black;
	};
	CellData m_cells[BOARD_HEIGHT][BOARD_WIDTH];

	bool isLineComplete(int row) const;
	void clearLine(int row);

};