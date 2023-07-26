#include <SFML/Graphics.hpp>

namespace
{
	constexpr int windowWidth { 800 };
	constexpr int windowHeight { 600 };
}


int main()
{
	sf::RenderWindow window{ {windowWidth, windowHeight}, "Flappy Bird" };

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
	}

	return 0;
}