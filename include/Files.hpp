#ifndef FILES_HPP
#define FILES_HPP
#include <vector>
#include <string>
class PathManager {
public:
	PathManager();
	void addPath(const std::string& path);

	bool pathExist(const std::string& path) const;

	std::vector<std::string> getSongs() const;

	inline std::vector<std::string> getPaths() const {return paths;}
private:
	std::vector<std::string> paths;
};

#endif
