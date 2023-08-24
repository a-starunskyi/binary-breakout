#include "pipe.hpp"
#include "settings.hpp"
#include "game.hpp"

#include <cstdlib>
#include <ctime>

#include <SFML/Window/Keyboard.hpp>
#include <SFML/Graphics/CircleShape.hpp>

Pipe::Pipe()
{

	gap = rand() % (300 - 100);

	pipeHight = ((setting::WINDOW_HEIGHT / 2) - gapSize);
	pipeWidth = setting::PIPE_WINDTH;

	pipePosX = setting::WINDOW_WIDTH;
	pipePosY = setting::WINDOW_HEIGHT;
}

Pipe::Pipe(int pipeSpc)
	:pipeSpace(pipeSpc)

{
	gap = rand() % (300 - 100);

	pipeHight = ((setting::WINDOW_HEIGHT / 2) - gap);
	pipeWidth = setting::PIPE_WINDTH;

	pipePosX = setting::WINDOW_WIDTH-pipeSpace;
	pipePosY = setting::WINDOW_HEIGHT;

}

void Pipe::tick(float dt)
{
	pipePosX += setting::PIPE_SPEED;
	
	if (pipePosX+setting::PIPE_WINDTH < 0)
	{
		pipePosX = setting::WINDOW_WIDTH;

		
		gap = 50+rand() % 150;

		pipeHight = ((setting::WINDOW_HEIGHT / 2) - gap);
	}
	
}

void Pipe::render()
{
	sf::RectangleShape pipeLower;
	pipeLower.setSize(sf::Vector2f(pipeWidth, -pipeHight));
	pipeLower.setPosition(pipePosX, pipePosY);
	pipeLower.setFillColor(sf::Color::Green);

	sf::RectangleShape pipeUpper;
	pipeUpper.setSize(sf::Vector2f(pipeWidth, pipeHight));
	pipeUpper.setPosition(pipePosX, 0);
	pipeUpper.setFillColor(sf::Color::Green);

	Game::getInstance().draw(pipeLower);
	Game::getInstance().draw(pipeUpper);
}