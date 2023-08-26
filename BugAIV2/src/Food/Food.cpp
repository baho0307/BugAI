#include "Food.h"

Food::Food()
{

}

Food::Food(int x, int y)
{
	m_X = x;
	m_Y = y;
}

int Food::getX()
{
	return m_X;
}

int Food::getY()
{
	return m_Y;
}
