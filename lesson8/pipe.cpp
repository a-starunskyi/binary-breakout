#include "pipe.hpp"
#include "settings.hpp"
#include "game.hpp"

Pipe::Pipe()
	: m_posX(0.f)
	, m_gapPosY(setting::WINDOW_HEIGHT / 2.f)
{
	m_upperPipe.setFillColor(setting::PIPE_COLOR);
	m_lowerPipe.setFillColor(setting::PIPE_COLOR);
}

void Pipe::move(float offset)
{
	m_posX += offset;
}

void Pipe::setPosition(float posX)
{
	m_posX = posX;
}

void Pipe::setPositionAndRandomGap(float posX)
{
	setPosition(posX);
	randomizeGap();
}

void Pipe::randomizeGap()
{
	int random = std::rand() % setting::PIPE_GAP_RANGE - setting::PIPE_GAP_RANGE / 2;
	m_gapPosY = setting::WINDOW_HEIGHT / 2.f + random;
}

void Pipe::render()
{
	float upperPipeHeight = m_gapPosY - setting::PIPE_GAP_HEIGHT / 2.f;
	m_upperPipe.setSize(sf::Vector2f(setting::PIPE_WIDTH, upperPipeHeight));
	m_upperPipe.setPosition(m_posX, 0.f);

	float lowerPipeHeight = setting::WINDOW_HEIGHT - m_gapPosY + setting::PIPE_GAP_HEIGHT / 2.f;
	m_lowerPipe.setSize(sf::Vector2f(setting::PIPE_WIDTH, lowerPipeHeight));
	m_lowerPipe.setPosition(m_posX, lowerPipeHeight);

	auto& game = Game::getInstance();
	game.draw(m_upperPipe);
	game.draw(m_lowerPipe);
}

bool Pipe::isOutOfScreen() const
{
	return m_posX + setting::PIPE_WIDTH < 0.f;
}

bool Pipe::intersects(sf::FloatRect bound)
{
	return m_upperPipe.getGlobalBounds().intersects(bound) 
		|| m_lowerPipe.getGlobalBounds().intersects(bound);
}