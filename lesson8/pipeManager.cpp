#include "pipeManager.hpp"
#include "settings.hpp"
#include "bird.hpp"

PipeManager::PipeManager()
	: m_speed(setting::PIPE_MANAGER_SPEED)
{
	for (int i = 0; i < setting::PIPES_COUNT; ++i)
	{
		resetPipe(m_pipes[i], setting::WINDOW_WIDTH + setting::PIPES_DISTANCE * i);
	}
}

void PipeManager::tick(float dt)
{
	for (auto& pipe : m_pipes)
	{
		if (pipe.isOutOfScreen())
		{
			resetPipe(pipe, getLastPipe().getPosX() + setting::PIPES_DISTANCE);
			continue;
		}

		pipe.move(dt * m_speed * -1);
	}
}

void PipeManager::render()
{
	for (auto& pipe : m_pipes)
	{
		pipe.render();
	}
}

bool PipeManager::checkCollision(const Bird& bird)
{
	for (auto& pipe : m_pipes)
	{
		if (pipe.intersects(bird.getBound()))
		{
			return true;
		}
	}

	return false;
}

const Pipe& PipeManager::getLastPipe() const
{
	const Pipe* lastPipe = nullptr;
	for (const auto& pipe : m_pipes)
	{
		if (!lastPipe)
		{
			lastPipe = &pipe;
			continue;
		}

		lastPipe = (pipe.getPosX() > lastPipe->getPosX()) ? &pipe : lastPipe;
	}

	return *lastPipe;
}

void PipeManager::resetPipe(Pipe& pipe, float posX)
{
	pipe.setPositionAndRandomGap(posX);
}