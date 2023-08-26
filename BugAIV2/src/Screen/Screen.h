#pragma once

#include <iostream>
#include <Windows.h>

class Screen
{
public:
	Screen();
	Screen(std::string *fs);

	void	Show();
private:
	int	x = 120;
	int	y = 30;
	std::string	prevBuffer;
	std::string	scrBuffer;
	std::string* src;
	void	setCursorPosition(int x, int y);
	void	Calc();
	void	Swap();
};

