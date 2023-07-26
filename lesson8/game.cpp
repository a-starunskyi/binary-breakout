#include "game.hpp"
#include "settings.hpp"
#include "bird.hpp"

#include <SFML/Graphics.hpp>

namespace
{
	// Properties
	sf::RenderWindow window{ {setting::WINDOW_WIDTH, setting::WINDOW_HEIGHT}, "Flappy Bird" };

	// Functions
	void tick(float dt)
	{
		bird::tick(dt);
	}

	void render()
	{
		bird::render();
	}

	void handleEvent(const sf::Event& event)
	{
		switch (event.type)
		{
		case sf::Event::Closed:
			game::exit();
			break;
		}

		
	}
}

namespace game
{
	void run()
	{
		sf::Clock clock;
		while (window.isOpen())
		{
			sf::Event event;
			while (window.pollEvent(event))
			{
				handleEvent(event);
			}

			sf::Time elapsed = clock.restart();
			tick(elapsed.asSeconds());

			window.clear(sf::Color::Blue);
			render();
			window.display();
		}
	}

	void exit()
	{
		window.close();
	}

	void draw(const sf::Shape& shape)
	{
		window.draw(shape);
	}
}