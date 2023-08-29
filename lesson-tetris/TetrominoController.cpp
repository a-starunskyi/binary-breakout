#include "TetrominoController.hpp"
#include <cstdlib>

TetrominoController::TetrominoController(Board& board)
	: m_board(board)
	, m_currentTetromino(nullptr){
}

bool TetrominoController::createTetromino(Tetromino::TetrominoShape shape, sf::Color color) {
	sf::Vector2f spawnPosition(Board::BOARD_WIDTH / 2 - 1, 0); // Spawn at the top center
	Tetromino* newTetromino = generateRandomTetromino(spawnPosition, color);

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			if (newTetromino->getShapeArrayRow(i)[j] != 0) {
				int row = static_cast<int>(spawnPosition.y) + i;
				int col = static_cast<int>(spawnPosition.x) + j;

				if (row >= 0 && m_board.isCellOccupied(row, col)) {
					//game over
					return false;
				}
			}
		}
	}
	
	m_currentTetromino = newTetromino;
	m_board.placeTetromino(*m_currentTetromino);

	return true;
}

bool Tetromino::canMoveLeft(const Board& board) const {
	for (int row = 0; row < 4; ++row) {
		for (int col = 0; col < 4; ++col) {
			if (m_shape[row][col] != 0) {
				int newRow = static_cast<int>(m_position.y) + row;
				int newCol = static_cast<int>(m_position.x) + col - 1;
				if (newCol < 0 || (newRow >= && board.isCellOccupied(newRow, newCol))) {
					return false; // Tetramino would go out of bounds or collide with a cell
				}
			}
		}
	}
	return true;
}

bool Tetromino::canMoveRight(const Board& board) const {
	for (int row = 0; row < 4; ++row) {
		for (int col = 0; col < 4; ++row) {
			if (m_shape[row][col] != 0) {
				int newRow = static_cast<int>(m_position.y) + row;
				int newCol = static_cast<int>(m_position.x) + col + 1;
				if (newCol >= Board::BOARD_WIDTH || (newRow >= 0 && board.isCellOccupied(newRow, newCol))) {
					return false;
				}
			}
		}
	}
	return true;
}

void TetrominoController::tick() {
	// Check if there is a tetromino 
	if (!m_currentTetromino) {
		// If there is none, create a new piece
		bool success = createTetromino(TetrominoShape::Random, sf::Color::White);
		if (!success) {
			// Handle game over
			return;
		}
	}
	
	// Handling movement, rotation and collisions
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		if (m_currentTetromino->canMoveLeft(m_board)) {
			m_currentTetromino->move(-1, 0);
		}
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		if (m_currentTetromino->canMoveRight(m_board)) {
			m_currentTetromino->move(1, 0);
		}
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
		if (m_currentTetromino->canRotate(m_board)) {
			m_currentTetromino->rotate();
		}
	}

	if (m_currentTetromino->canMoveDown(m_board)) {
		m_currentTetromino->move(0, 1);
	}
	else {
		m_currentTetromino = nullptr;
	}
	
	m_board.tick();
}

void TetrominoController::render(sf::RenderWindow& window) {
	if (m_currentTetromino) {
		m_currentTetromino->render(window, m_currentTetromino->getPosition(), m_currentTetromino->getFillColor());
	}
	m_board.render(window);
}

Tetromino* TetrominoController::generateRandomTetromino(sf::Vector2f position, sf::Color color) {
	Tetromino::TetrominoShape shape = static_cast<Tetromino::TetrominoShape>(rand() % 7);

	switch (shapeIndex) {
		case Tetromino::TetrominoShape::I:
			return new IShapeTetromino(position, color);
		case Tetromino::TetrominoShape::L:
			return new LShapeTetromino(position, color);
		case Tetromino::TetrominoShape::T:
			return new TShapeTetromino(position, color);
		case Tetromino::TetrominoShape::Z:
			return new ZShapeTetromino(position, color);
		case Tetromino::TetrominoShape::S:
			return new CubeShapeTetromino(position, color);
		case Tetromino::TetrominoShape::J:
			return new JShapeTetromino(position, color);
		case Tetromino::TetrominoShape::Cube:
			return new SShapeTetromino(position, color);
		default:
			return nullptr;
	}
}

void TetrominoController::cleanupTetrominos() {
	for (auto tetromino : m_tetrominoes) {
		delete tetromino;
	}
	m_tetrominoes.clear();
}

TetrominoController::~TetrominoController() {
	cleanupTetrominos();
}