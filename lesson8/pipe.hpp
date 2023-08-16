#pragma once

#include "settings.hpp"

class Pipe
{
public:
	Pipe();

	Pipe(int posX);

	void render();

	void tick(float dt);

private:
	int pipeHight;
	int pipeWidth;

	int pipePosX;
	int pipePosY;

	int pipeSpace;

	int gap;
	int gapSize;


};