#pragma once

#include "../Food/Food.h"
#include <vector>
#include <random>
#include <string>
#include <map>

class Map
{
public:
	Map();
	Map(int x, int y);
	Map(Map& cpy);

	Map operator=(Map* cpy);

	std::vector<std::vector<int>>	getMap();
private:

	void		createMap(int x, int y);
	std::vector<std::vector<int>> map;
	int	m_X;
	int	m_Y;
};

