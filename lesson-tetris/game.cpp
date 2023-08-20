#include "game.hpp"
#include "settings.hpp"


Game::Game()
	: m_window({ setting::WINDOW_WIDTH, setting::WINDOW_HEIGHT }, "Tetris")
{
	// Creating tetromino instances and adding them to the vector
	m_tetrominoes.push_back(new IShapeTetromino(sf::Vector2f(100.0f, 100.0f), sf::Color::Red));
	m_tetrominoes.push_back(new LShapeTetromino(sf::Vector2f(200.0f, 200.0f), sf::Color::Yellow));
	m_tetrominoes.push_back(new TShapeTetromino(sf::Vector2f(300.0f, 300.0f), sf::Color::Blue));
	m_tetrominoes.push_back(new ZShapeTetromino(sf::Vector2f(400.0f, 400.0f), sf::Color::Green));
	m_tetrominoes.push_back(new CubeShapeTetromino(sf::Vector2f(500.0f, 500.0f), sf::Color::Magenta));
	
}

Game::~Game()
{
	for (auto tetromino : m_tetrominoes) {
		delete tetromino;
	}
}

	void Game::run()
{
	tetrominoFillColor = sf::Color::Red;
	tetrominoPosition = sf::Vector2f(100.0f, 100.0f);

	sf::Clock clock;
	while (m_window.isOpen())


	{
		sf::Event event;
		while (m_window.pollEvent(event))
		{
			handleEvent(event);
		}

		sf::Time elapsed = clock.restart();
		tick(elapsed.asSeconds());

		m_window.clear(sf::Color::Black);
		render();
		m_window.display();
	}
}

void Game::exit()
{
	m_window.close();
}

void Game::draw(const sf::Drawable& shape)
{
	m_window.draw(shape);
}

void Game::tick(float dt)
{
	if (isGameOver)
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
		{
			restartGame();
		}

		return;
	}
}

void Game::render()
{
	m_window.clear(sf::Color::Black);

	for (const auto& tetromino : m_tetrominoes) {
		tetromino->render(m_window, tetromino->getPosition(), tetromino->getFillColor());
	}

	m_window.display();
}

void Game::handleEvent(const sf::Event& event)
{
	switch (event.type)
	{
	case sf::Event::Closed:
		exit();
		break;
	}
}

void Game::restartGame()
{
	isGameOver = false;
}

void Game::gameOver()
{
	if (isGameOver)
	{
		return;
	}

	isGameOver = true;
}