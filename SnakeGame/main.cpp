#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
int main() {

	
	sf::Vector2i fieldSize(20, 15);


	sf::Font font;
	if (font.loadFromFile("arial.ttf") == false) {
		return EXIT_FAILURE;
	}
	sf::Text text("score", font, 30);
	text.setFillColor(sf::Color(100, 150, 100));


	sf::Texture blocktexture;
	if (!blocktexture.loadFromFile("block.png")) {
		std::cout << "block.png is not found" << std::endl;
		return EXIT_FAILURE;
	}
	
	std::vector<sf::Vector2i> snake = { sf::Vector2i(3,4) };
	sf::Vector2i food(rand()%fieldSize.x, rand()%fieldSize.y);

	sf::Sprite block(blocktexture);

	sf::Vector2<float> blockSize(
	 block.getLocalBounds().width,
	 block.getLocalBounds().height);

	sf::VideoMode mode(
		unsigned int(fieldSize.x * blockSize.x),
		unsigned int(fieldSize.y * blockSize.y));
	
	sf::RenderWindow w(mode, "Snake_Game");
	
	


	enum class Direction {UP,DOWN,LEFT,RIGHT};
	Direction direction = Direction::RIGHT;
	sf::Clock clock;

	bool isDead = false;
	while (w.isOpen()) {
		sf::Event evt;
		if (w.pollEvent(evt)) {
			if (evt.type == sf::Event::Closed) {
				w.close();
			}
			if (evt.type == sf::Event::KeyPressed) {
				if (evt.key.code == sf::Keyboard::Up) {
					direction = Direction::UP;
				}
				if (evt.key.code == sf::Keyboard::Down) {
					direction = Direction::DOWN;
				}
				if (evt.key.code == sf::Keyboard::Left) {
					direction = Direction::LEFT;
				}
				if (evt.key.code == sf::Keyboard::Right) {
					direction = Direction::RIGHT;
				}
			}
		}
		if (clock.getElapsedTime().asSeconds() >= 0.2f) {
			// snake = {(3,4)}
			// head = (3,4)
			sf::Vector2i head = snake[0];

			//moving of object
			if (direction == Direction::UP) {
				head.y--;
			}
			if (direction == Direction::DOWN) {
				head.y++;
			}
			if (direction == Direction::LEFT) {
				head.x--;
			}
			if (direction == Direction::RIGHT) {
				head.x++;
			}

			
			
			
			if (head.x < 0 || head.x >= fieldSize.x ||
				head.y < 0 || head.y >= fieldSize.y) {
				isDead = true;
			}
			if (!isDead) {
				// Has food eaten by snake?
				if (food == head) {
					std::cout << "Eaten" << std::endl;
				}
				else {
					snake.pop_back();
				}
				snake.insert(snake.begin(), head);
			}
			clock.restart();
		}
		
		if (isDead) {
			w.clear(sf::Color::Red);
		}
		else {
			w.clear();
		}
		


		//draw snake
		for (const sf::Vector2i& body : snake) {
			sf::Vector2f bodyPos(
				body.x * blockSize.x,
				body.y * blockSize.y);
			block.setPosition(bodyPos);
			w.draw(block);
		}
		

		//draw food
		sf::Vector2f foodPos(
			food.x* blockSize.x,
			food.y* blockSize.y);
		block.setPosition(foodPos.x, foodPos.y);
		w.draw(block);


		//draw score 
		w.draw(text);

		w.display();
		
	
	}
	return EXIT_SUCCESS;


}