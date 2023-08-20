#include "Tetromino.hpp"

void Tetromino::rotate() {

}

void Tetromino::move(int offsetX, int offsetY) {

}

Tetromino::Tetromino(sf::Vector2f position, sf::Color color)
	: position(position), fillColor(color) {
}

void Tetromino::render(sf::RenderWindow& window, sf::Vector2f position, sf::Color fillColor) {
	sf::RectangleShape block(sf::Vector2f(30.0f, 30.0f));

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			if (shapeArray[i][j] != 0) {
				block.setPosition(position.x + j * 30.0f, position.y + i * 30.0f);
				block.setFillColor(fillColor);
				window.draw(block);
			}
		}
	}
}

void Tetromino::setShape(const int shape[4][4]) {
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			shapeArray[i][j] = shape[i][j];
		}
	}
}

IShapeTetromino::IShapeTetromino(sf::Vector2f position, sf::Color color)
	: Tetromino(position, color) {
	int shape[4][4] = {
		{0,0,0,0},
		{1,1,1,1},
		{0,0,0,0},
		{0,0,0,0}
	};

	setShape(shape);
}

LShapeTetromino::LShapeTetromino(sf::Vector2f position, sf::Color color)
	: Tetromino(position, color) {
	int shape[4][4] = {
		{1,0,0,0},
		{1,0,0,0},
		{1,1,0,0},
		{0,0,0,0}
	};

	setShape(shape);
}
TShapeTetromino::TShapeTetromino(sf::Vector2f position, sf::Color color)
	: Tetromino(position, color) {
	int shape[4][4] = {
		{0,1,0,0},
		{1,1,1,0},
		{0,0,0,0},
		{0,0,0,0}
	};

	setShape(shape);
}

ZShapeTetromino::ZShapeTetromino(sf::Vector2f position, sf::Color color)
	: Tetromino(position, color) {
	int shape[4][4] = {
		{1,1,0,0},
		{0,1,1,0},
		{0,0,0,0},
		{0,0,0,0}
	};

	setShape(shape);
}

CubeShapeTetromino::CubeShapeTetromino(sf::Vector2f position, sf::Color color)
	: Tetromino(position, color) {
	int shape[4][4] = {
		{1,1,0,0},
		{1,1,0,0},
		{0,0,0,0},
		{0,0,0,0}
	};

	setShape(shape);
}