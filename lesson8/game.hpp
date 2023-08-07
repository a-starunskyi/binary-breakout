#pragma once

#include "bird.hpp"
#include <SFML/Graphics.hpp>

// Singleton
class Game
{
public:
	static Game& getInstance()
	{
		static Game game;
		return game;
	}

	~Game();

	void run();
	void exit();
	void draw(const sf::Shape& shape);

private:
	Game();
	Game(const Game& otherGame);
	Game& operator=(const Game& otherGame);

	void tick(float dt);
	void render();
	void handleEvent(const sf::Event& event);

private:
	sf::RenderWindow m_window;
	Bird* m_birds[5];
};