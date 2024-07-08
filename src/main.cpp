#include <SFML/Audio.hpp>
#include <iostream>

int main() {
    // Cargar un archivo de audio (cambia la ruta según la ubicación de tu archivo)
    sf::Music music;
    if (!music.openFromFile("media/song.wav")) {
        std::cerr << "Error al cargar el archivo de audio." << std::endl;
        return 1;
    }

    // Reproducir la canción
    music.play();

    // Esperar hasta que la canción termine (opcional)
    while (music.getStatus() == sf::Music::Playing) {
        sf::sleep(sf::milliseconds(100));
    }

    return 0;
}

