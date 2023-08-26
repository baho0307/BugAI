#include "Map.h"

Map::Map()
{

}

Map::Map(int x, int y)
{
	m_X = x;
	m_Y = y;
	createMap(x, y);
}

Map::Map(Map& cpy)
{
	this->m_X = cpy.m_X;
	this->m_Y = cpy.m_Y;
}

Map Map::operator=(Map* cpy)
{
	this->m_X = cpy->m_X;
	this->m_Y = cpy->m_Y;
	this->map = cpy->map;

	return (*this);
}

std::vector<std::vector<int>> Map::getMap()
{
	return map;
}

void Map::createMap(int x, int y)
{
	int	i;
	int	j;

	map.clear();
	i = 0;
	while (i < y)
	{
		j = 0;
		map.push_back(std::vector<int>());
		while (j < x)
		{
			if (!(i + j) || (i == y - 1 && j == x - 1) || (i == 0 && j == x - 1) || (i == y - 1 && j == 0))
				map[i].push_back(1);
			else if (i == 0)
				map[i].push_back(11);
			else if (i == y - 1)
				map[i].push_back(12);
			else if (j == 0)
				map[i].push_back(1);
			else if (j == x - 1)
				map[i].push_back(10);
			else
				map[i].push_back(0);
			j++;
		}
		i++;
	}
}

