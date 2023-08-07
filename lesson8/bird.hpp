#pragma once

#include "settings.hpp"

class Bird
{
	static const float JUMP_FORCE;
public:

	Bird();
	Bird(float initY, float initX = setting::WINDOW_WIDTH / 4.f);

	void jump();
	void tick(float dt);
	void render();

private:
	const float m_x;
	float m_y;
	float m_speed;
};