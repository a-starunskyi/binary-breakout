#pragma once

#include "settings.hpp"

#include "tetromino.hpp"
#include "iShapeTetromino.hpp"
#include "zShapeTetromino.hpp"
#include "tShapeTetromino.hpp"
#include "lShapeTetromino.hpp"
#include "cubeShapeTetromino.hpp"

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
	void draw(const sf::Drawable& shape);

private:
	Game();
	Game(const Game& otherGame);
	Game& operator=(const Game& otherGame);

	void tick(float dt);
	void render();
	void handleEvent(const sf::Event& event);

	void restartGame();
	void gameOver();

private:
	bool isGameOver = false;
	sf::RenderWindow m_window;

	LShapeTetromino zTet;
};