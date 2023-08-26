#include "Program.h"

Program::Program()
{
	std::random_device dev;
	std::mt19937 rng(dev());
}

Program::Program(int mapX, int mapY, unsigned int genSize)
{
	std::random_device dev;
	std::mt19937 rng(dev());
	map = new Map(mapX, mapY);
	this->mapX = mapX;
	this->mapY = mapY;
	createFood();
	gen = std::vector<Bug>(genSize, Bug(mapX / 2, mapY / 2));
	strMap = createStrMap();
	scr = Screen(&strMap);
}

void Program::createFood()
{
	std::uniform_int_distribution<std::mt19937::result_type> distX(1, mapX - 1);
	std::uniform_int_distribution<std::mt19937::result_type> distY(1, mapY - 1);

	foods.push_back(Food(distX(rng), distY(rng)));
}

std::string Program::createStrMap()
{
	std::string	re = "";
	int i;
	int j;

	i = 0;
	while (i < mapY)
	{
		j = 0;
		re += "\n";
		while (j < mapX)
		{
			if (i == gen[0].getY() && j == gen[0].getY())
				re += texture[4];
			else if (i == foods[gen[0].getScore()].getY() && j == foods[gen[0].getScore()].getX())
				re += texture[2];
			else
				re += texture[map.getMap()[i][j]];
			j++;
		}
		i++;
	}
	return re;
}

void Program::Update()
{
	strMap = createStrMap();
	while (true)
		scr.Show();
}
