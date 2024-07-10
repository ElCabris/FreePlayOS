#ifndef MUSIC_HPP
#define MUSIC_HPP

#include <SFML/Audio.hpp>
#include <string>

class MusicPlayer {
public:
	MusicPlayer();
	void play();
	void pause();
	void next();
	void previous();
	
private:
	void openSong(std::string path_song);
	sf::Music music;
	int actual_song;
	std::vector<std::string> songs;
};

#endif
