#include <iostream>
#include <Files.hpp>
#include <filesystem>
#include <fstream>

const std::string PATH_DIR = "./data/path.txt";

PathManager::PathManager() {
	std::ifstream path(PATH_DIR);
	if (path.is_open()){
		std::string aux;
		while (std::getline(path, aux))
			paths.push_back(aux);
		path.close();
	}
}

void PathManager::addPath(const std::string& path) {
	std::ofstream data(PATH_DIR, std::ios::app);
	if (data.is_open()) {
		std::filesystem::path p = path;
		if (std::filesystem::exists(p) && std::filesystem::is_directory(p)) {
			data << path << std::endl;
			paths.push_back(path);
		}
		data.close();
	}
}

bool PathManager::pathExist(const std::string& path) const {
	std::filesystem::path p = path;
	for (const auto& it : paths) {
		if (it == path) return true;
	}
	return false;
}

std::vector<std::string> PathManager::getSongs() const {
	std::vector<std::string> result;
	for (const auto& it : paths) {
		std::filesystem::path p = it;
		for (const auto& it : std::filesystem::directory_iterator(p))
			if (it.path().extension() == ".wav")
				result.push_back(it.path());
	}
	return result;
}
