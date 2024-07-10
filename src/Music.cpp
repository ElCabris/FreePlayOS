#include <Music.hpp>
#include <Files.hpp>
#include <iostream>

MusicPlayer::MusicPlayer() {
	PathManager pm;
	songs = pm.getSongs();
	actual_song = 0;
	openSong(songs[actual_song]);
}

void MusicPlayer::openSong(std::string path_song) {
	if (!music.openFromFile(path_song))
		std::cerr << "error al intentar reproducir " << path_song << std::endl;
}

void MusicPlayer::play() {
	music.play();
}

void MusicPlayer::pause() {
	music.pause();
}

void MusicPlayer::next() {
	actual_song++;
	if (actual_song >= songs.size()) actual_song = 0;
	openSong(songs[actual_song]);
	play();
}

void MusicPlayer::previous() {
	actual_song--;
	if (actual_song < 0) actual_song = songs.size() - 1;
	openSong(songs[actual_song]);
	play();
}
