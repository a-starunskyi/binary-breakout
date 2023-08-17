#pragma once

#include <SFML/Graphics/RectangleShape.hpp>

class Pipe
{
public:
	Pipe();
	void move(float offset);
	void setPosition(float posX);
	void setPositionAndRandomGap(float posX);

	void randomizeGap();
	void render();

	bool isOutOfScreen() const;
	bool intersects(sf::FloatRect bound);

	float getPosX() const { return m_posX; }
private:
	float m_posX;
	float m_gapPosY;

	sf::RectangleShape m_upperPipe;
	sf::RectangleShape m_lowerPipe;
};