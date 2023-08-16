#include "game.hpp"
#include "settings.hpp"
//#include "bird.hpp"



Game::Game()
	: m_window({ setting::WINDOW_WIDTH, setting::WINDOW_HEIGHT }, "Flappy Bird")
	, m_pipe{nullptr}
{
	float pipeX = setting::WINDOW_WIDTH;

	for(auto& n_pipes: m_pipe)
	{ 
		n_pipes = new Pipe(pipeX);
		pipeX -=400;
	}
}

Game::~Game()
{
	
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

	m_birds.tick(dt);

	for (auto& n_pipes : m_pipe)
	{
		n_pipes->tick(dt);
	}

}

void Game::render()
{
	m_birds.render();
	for (auto& n_pipes : m_pipe)
	{
		n_pipes->render();
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