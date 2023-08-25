#pragma once

#include <SFML/Graphics/Color.hpp>

namespace setting
{
	// Game
	constexpr int WINDOW_HEIGHT = 600;
	constexpr int WINDOW_WIDTH = 800;

	// Bird
	const float BIRD_GRAVITY = 400.f;
	const float JUMP_FORCE = -200.f;

	const float BIRD_RADIUS = 15.f;
	const sf::Color BIRD_COLOR(sf::Color::Red);

	// PIPE
	const float PIPE_WIDTH = 100.f;
	const float PIPE_GAP_HEIGHT = 200.f;
	const int PIPE_GAP_RANGE = 100;
	const sf::Color PIPE_COLOR(sf::Color::Green);

	// PIPE MANAGER
	const float PIPE_MANAGER_SPEED = 200.f;
	const unsigned int PIPES_COUNT = 5;
	const float PIPES_DISTANCE = 300.f;
}