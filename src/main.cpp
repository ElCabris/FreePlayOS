#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <WindowElements.hpp>
#include <iostream>

int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "FreePlayOS");
	

    sf::Music music;
    if (!music.openFromFile("media/song.wav")) {
        std::cerr << "Error al cargar el archivo de audio." << std::endl;
        return 1;
    }

    	auto playButton = createButton(200, 250, 100, 50, sf::Color::Green);
	auto pauseButton = createButton(500, 250, 100, 50, sf::Color::Red);

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::MouseButtonPressed) {
				if (event.mouseButton.button == sf::Mouse::Left) {
					auto mousePos = sf::Mouse::getPosition(window);
					if (playButton.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
						music.play();
					} else if (pauseButton.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
						music.pause();
					}

				}
			}
		}

		window.clear();
		window.draw(playButton);
		window.draw(pauseButton);
		window.display();
	}	
    return 0;
}

