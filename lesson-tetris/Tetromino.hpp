#pragma once

#include <SFML/Graphics.hpp>

class Tetromino {
public:
	Tetromino(sf::Vector2f position, sf::Color color);
	void setShape(const int shape[4][4]);
	void rotate();
	void move(int offsetX, int offsetY);
	void render(sf::RenderWindow& window, sf::Vector2f position, sf::Color fillColor);
	enum class TetrominoShape { I, L, T, Z, Cube, S, J };
	virtual const int* getShapeArrayRow(int row) const {
		return shapeArray[row];
	}
	virtual const int* getShape() const = 0;

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

	const int* getShape() const override {
		return getShapeArrayRow(0);
	}
};

class LShapeTetromino : public Tetromino {
public:
	LShapeTetromino(sf::Vector2f position, sf::Color color);

	const int* getShape() const override {
		return getShapeArrayRow(0);
	}
};

class TShapeTetromino : public Tetromino {
public:
	TShapeTetromino(sf::Vector2f position, sf::Color color);

	const int* getShape() const override {
		return getShapeArrayRow(0);
	}
};

class ZShapeTetromino : public Tetromino {
public:
	ZShapeTetromino(sf::Vector2f position, sf::Color color);

	const int* getShape() const override {
		return getShapeArrayRow(0);
	}
};

class CubeShapeTetromino : public Tetromino {
public:
	CubeShapeTetromino(sf::Vector2f position, sf::Color color);

	const int* getShape() const override {
		return getShapeArrayRow(0);
	}
};

class SShapeTetromino : public Tetromino {
public:
	SShapeTetromino(sf::Vector2f position, sf::Color color);

	const int* getShape() const override {
		return getShapeArrayRow(0);
	}
};

class JShapeTetromino : public Tetromino {
public:
	JShapeTetromino(sf::Vector2f position, sf::Color color);

	const int* getShape() const override {
		return getShapeArrayRow(0);
	}
};