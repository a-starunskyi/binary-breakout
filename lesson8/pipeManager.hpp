#pragma once

#include "pipe.hpp"
#include "settings.hpp"

class Bird;

class PipeManager
{
public:
	PipeManager();

	void tick(float dt);
	void render();
	bool checkCollision(const Bird& bird);
private:
	void resetPipe(Pipe& pipe, float posX);
	const Pipe& getLastPipe() const;
private:
	float m_speed;
	Pipe m_pipes[setting::PIPES_COUNT];
};