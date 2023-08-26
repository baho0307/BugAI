#pragma once

class Food
{
public:
	Food();
	Food(int x, int y);
	int	getX();
	int	getY();

private:
	int	m_X;
	int	m_Y;
};

