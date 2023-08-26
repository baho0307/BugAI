#include "Screen.h"

Screen::Screen()
{

}

Screen::Screen(std::string *fs)
{
	src = fs;
	prevBuffer = *fs;
	scrBuffer = *fs;
	std::cout << scrBuffer;
}

void Screen::setCursorPosition(int x, int y)
{
	static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	std::cout.flush();
	COORD coord = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(hOut, coord);
}

void Screen::Show()
{
	Calc();
	for (int i = 0; i < prevBuffer.size(); i++)
	{
		if (scrBuffer[i] != prevBuffer[i])
		{
			setCursorPosition((i % x), (i / x));
			std::cout << scrBuffer[i];
		}
	}
	setCursorPosition(0, 0);
}

void Screen::Calc()
{
	prevBuffer = *src;
	Swap();
}

void Screen::Swap()
{
	std::string tmp;

	tmp = prevBuffer;
	prevBuffer = scrBuffer;
	scrBuffer = tmp;
}