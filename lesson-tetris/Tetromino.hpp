#pragma once

#include <SFML/Graphics.hpp>

class Tetromino {
public:
	Tetromino(sf::Vector2f position, sf::Color color);
	void setShape(const int shape[4][4]);
	void rotate();
	void move(int offsetX, int offsetY);
	void render(sf::RenderWindow& window, sf::Vector2f position, sf::Color fillColor);
	
	sf::Vector2f getPosition() const {
		return position;
	}

	sf::Color getFillColor() const {
		return fillColor;
	}

private:
	int shapeArray[4][4] = {};
	sf::Vector2f position; 
	sf::Color fillColor;
};

class IShapeTetromino : public Tetromino {
public:
	IShapeTetromino(sf::Vector2f position, sf::Color color);
};

class LShapeTetromino : public Tetromino {
public:
	LShapeTetromino(sf::Vector2f position, sf::Color color);
};

class TShapeTetromino : public Tetromino {
public:
	TShapeTetromino(sf::Vector2f position, sf::Color color);
};

class ZShapeTetromino : public Tetromino {
public:
	ZShapeTetromino(sf::Vector2f position, sf::Color color);
};

class CubeShapeTetromino : public Tetromino {
public:
	CubeShapeTetromino(sf::Vector2f position, sf::Color color);
};