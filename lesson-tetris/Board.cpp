#include "Board.hpp"

Board::Board()
{
	for (int i = 0; i < BOARD_HEIGHT; ++i)
	{
		for (int j = 0; j < BOARD_WIDTH; ++j)
		{
			m_cells[i][j].occupied = false;
			m_cells[i][j].color = sf::Color::Black;
		}
	}
}

void Board::tick()
{
	// Update logic for the board
	clearCompletedLines();
}

void Board::render(sf::RenderWindow& window)
{

	for (int i = 0; i < BOARD_WIDTH; ++i)
	{
		for (int j = 0; j < BOARD_HEIGHT; ++j)
		{
			sf::RectangleShape cell(sf::Vector2f(CELL_SIZE, CELL_SIZE));
			cell.setPosition(i * CELL_SIZE, j * CELL_SIZE);
			cell.setFillColor(m_cells[j][i].color);
			window.draw(cell);
		}
	}
}

void Board::placeTetromino(const Tetromino& tetromino)
{
	sf::Vector2f tetrominoPos = tetromino.getPosition();
	sf::Color tetrominoColor = tetromino.getFillColor();

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (tetrominoPos.y + i >= 0 && tetromino.getShape()[i][j] != 0)
			{
				m_cells[static_cast<int>(tetrominoPos.y) + i][static_cast<int>(tetrominoPos.x) + j].occupied = true;
				m_cells[static_cast<int>(tetrominoPos.y) + i][static_cast<int>(tetrominoPos.x) + j].color = tetrominoColor;
			}
		}
	}
}

void Board::clearCompletedLines()
{
	for (int i = BOARD_HEIGHT - 1; i >= 0; --i)
	{
		if (isLineComplete(i))
		{
			clearLine(i);
		}
	}
}

bool Board::isLineComplete(int row) const
{
	//Check if a given row is complete
	for (int j = 0; j < BOARD_WIDTH; ++j)
	{
		if (!m_cells[row][j].occupied)
		{
			return false;
		}
	}
	return true;
}

void Board::clearLine(int row)
{
	// Clear a given row and shift the rest down
	for (int i = row; i > 0; --i)
	{
		for (int j = 0; j < BOARD_WIDTH; ++j)
		{
			m_cells[i][j].occupied = m_cells[i - 1][j].occupied;
			m_cells[i][j].color = m_cells[i - 1][j].color;
		}
	}
	// Clearing the top row
	for (int j = 0; j < BOARD_WIDTH; ++j)
	{
		m_cells[0][j].occupied = false;
		m_cells[0][j].color = sf::Color::Black;
	}
}