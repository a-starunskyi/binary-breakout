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
}