#include "bird.hpp"
#include "settings.hpp"
#include "game.hpp"

#include <SFML/Window/Keyboard.hpp>
#include <SFML/Graphics/CircleShape.hpp>

namespace
{
	// Properties
	float x = setting::WINDOW_WIDTH / 4.f;
	float y = setting::WINDOW_HEIGHT / 2.f;
	float speed = 0.f;
}

namespace bird
{
	void jump()
	{
		speed = setting::JUMP_FORCE;
	}

	void tick(float dt)
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
		{
			jump();
		}

		speed += setting::BIRD_GRAVITY * dt;
		y += speed * dt;
	}

	void render()
	{
		sf::CircleShape bird(setting::BIRD_RADIUS);
		bird.setFillColor(setting::BIRD_COLOR);
		bird.setPosition(x, y);

		game::draw(bird);
	}

	float getBirdY()
	{
		return y;
	}
}