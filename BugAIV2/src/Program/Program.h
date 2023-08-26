#pragma once

#include <map>
#include "../Map/Map.h"
#include "../Screen/Screen.h"
#include "../Bug/Bug.h"

class Program
{
public:
	Program();
	Program(int mapX, int mapY, unsigned int genSize);

	void	Update();

private:
	std::string	createStrMap();
	void		createFood();

	int mapX; 
	int mapY;
	Map	map;
	std::string strMap;
	Screen	scr;
	std::vector<Bug>	gen;
	std::random_device dev;
	std::mt19937 rng;
	std::vector<Food>	foods;
	std::map<int, std::string>	texture =
	{
		{0, " "},		//VOID
		{1, "\xdb"},	//LEFT WALLS
		{10, "\xdb"},	//RIGHT WALLS
		{11, "\xdf"},	//UP WALLS
		{12, "\xdc"},	//DOWN WALLS
		{2, "F"},		//FOOD
		{3, "S"},		//SNEK.
		{4, "@"}		//HEAD
	};
};

