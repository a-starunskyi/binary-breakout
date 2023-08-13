#include "game.hpp"
#include "settings.hpp"
//#include "bird.hpp"



Game::Game()
	: m_window({ setting::WINDOW_WIDTH, setting::WINDOW_HEIGHT }, "Flappy Bird")
	, m_birds{nullptr}
{
	float birdY = 0.f;
	for (auto& pBird : m_birds)
	{
		pBird = new Bird(birdY);
		birdY += 20.f;
	}
}

Game::~Game()
{
	for (auto& pBird : m_birds)
	{
		delete pBird;
		pBird = nullptr;
	}
}

void Game::run()
{
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

		m_window.clear(sf::Color::Blue);
		render();
		m_window.display();
	}
}

void Game::exit()
{
	m_window.close();
}

void Game::draw(const sf::Shape& shape)
{
	m_window.draw(shape);
}

void Game::tick(float dt)
{
	for (auto& bird : m_birds)
	{

		bird->tick(dt);
	}
}

void Game::render()
{
	for (auto& bird : m_birds)
	{
		bird->render();
	}
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