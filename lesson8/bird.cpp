#include "bird.hpp"
#include "settings.hpp"
#include "game.hpp"

#include <SFML/Window/Keyboard.hpp>
#include <SFML/Graphics/CircleShape.hpp>

const float Bird::JUMP_FORCE = -200.f;

Bird::Bird()
	: m_x(setting::WINDOW_WIDTH / 4.f)
	, m_y(setting::WINDOW_HEIGHT / 2.f)
	, m_speed(0.f)
{
}

Bird::Bird(float initX, float initY)
	: m_x(initX)
	, m_y(initY)
	, m_speed(0.f)
	
{
}

void Bird::jump()
{
	m_speed = JUMP_FORCE;
}

void Bird::tick(float dt)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{
		jump();
	}

	m_speed += setting::BIRD_GRAVITY * dt;
	m_y += m_speed * dt;
}

void Bird::render()
{
	sf::CircleShape bird(setting::BIRD_RADIUS);
	bird.setFillColor(setting::BIRD_COLOR);
	bird.setPosition(m_x, m_y);

	Game::getInstance().draw(bird);
}

void Bird::restart()
{
	m_y = setting::WINDOW_HEIGHT / 2.f;
	m_speed = 0.f;
}

bool Bird::isOutOfScreen() const
{
	return m_y < 0.f || m_y > setting::WINDOW_HEIGHT;
}

sf::FloatRect Bird::getBound() const
{
	sf::CircleShape bird(setting::BIRD_RADIUS);
	bird.setPosition(m_x, m_y);

	return bird.getGlobalBounds();
}