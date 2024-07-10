#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <WindowElements.hpp>
#include <Music.hpp>
#include <iostream>

int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "FreePlayOS");
	
    	auto playButton = createButton(200, 250, 100, 50, sf::Color::Green);
	auto pauseButton = createButton(500, 250, 100, 50, sf::Color::Red);
	auto nextSong = createButton(200, 100, 100, 50, sf::Color::Green);
	auto previousSong = createButton(500, 100, 100, 50, sf::Color::Red);

	MusicPlayer music;

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::MouseButtonPressed) {
				if (event.mouseButton.button == sf::Mouse::Left) {
					auto mousePos = sf::Mouse::getPosition(window);
					if (playButton.getGlobalBounds().contains(mousePos.x, mousePos.y))
						music.play();
					else if (pauseButton.getGlobalBounds().contains(mousePos.x, mousePos.y)) 
						music.pause();
					else if (nextSong.getGlobalBounds().contains(mousePos.x, mousePos.y))
						music.next();
					else if (previousSong.getGlobalBounds().contains(mousePos.x, mousePos.y))
						music.previous();
				}
			}
		}

		window.clear();
		window.draw(playButton);
		window.draw(pauseButton);
		window.draw(nextSong);
		window.draw(previousSong);
		window.display();
	}	
    return 0;
}

