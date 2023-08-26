#pragma once

class Bug
{
public:
	Bug();
	Bug(int x, int y);

	int	getScore();
	int	getX();
	int	getY();
private:
	int	m_X;
	int	m_Y;
	int	score;
	double	fitness;
};

