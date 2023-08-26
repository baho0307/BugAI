#include "Bug.h"

Bug::Bug()
{

}

Bug::Bug(int x, int y)
{
    m_X = x;
    m_Y = y;
    score = 0;
}

int Bug::getScore()
{
    return (score);
}

int Bug::getX()
{
    return (m_X);
}

int Bug::getY()
{
    return (m_Y);
}
