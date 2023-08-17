#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

class Tetromino {
public:
    Tetromino(const std::vector<std::vector<char>>& shape, sf::Color color, sf::Vector2i position)
        : shape(shape), color(color), position(position) {}

    void rotate() {
        // Placeholder for rotation logic
    }

    void moveLeft() {
        position.x--;
    }

    void moveRight() {
        position.x++;
    }

    void moveDown() {
        position.y++;
    }

    void draw(sf::RenderWindow& window) const {
        sf::RectangleShape block(sf::Vector2f(30.f, 30.f));
        block.setFillColor(color);

        for (int i = 0; i < shape.size(); ++i) {
            for (int j = 0; j < shape[i].size(); ++j) {
                if (shape[i][j] != ' ') {
                    block.setPosition(sf::Vector2f(position.x * 30.f + j * 30.f, position.y * 30.f + i * 30.f));
                    window.draw(block);
                }
            }
        }
    }

private:
    std::vector<std::vector<char>> shape;
    sf::Color color;
    sf::Vector2i position;
};

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Tetris");
    window.setFramerateLimit(60);

    // Определение формы фигуры (пример для буквы "L")
    std::vector<std::vector<char>> lShape = {
        {' ', ' ', '#'},
        {'#', '#', '#'},
        {' ', ' ', ' '}
    };

    // Создание объекта фигуры
    Tetromino tetromino(lShape, sf::Color::Magenta, sf::Vector2i(5, 0));

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Left) {
                    tetromino.moveLeft();
                }
                else if (event.key.code == sf::Keyboard::Right) {
                    tetromino.moveRight();
                }
                else if (event.key.code == sf::Keyboard::Down) {
                    tetromino.moveDown();
                }
            }
        }

        window.clear();
        tetromino.draw(window);
        window.display();
    }

    return 0;
}
