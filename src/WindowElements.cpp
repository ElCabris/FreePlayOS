#include <WindowElements.hpp>

sf::RectangleShape createButton(float x, float y, float width, float height, const sf::Color& color) {
	sf::RectangleShape button(sf::Vector2f(width, height));
	button.setPosition(x, y);
	button.setFillColor(color);
	return button;
}
