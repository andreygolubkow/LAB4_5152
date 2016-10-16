#include <iostream>
#include "Color.h"

void SetColor(Color color)
{
	switch (color)
	{
	case Blue:
		system("color 1");
		break;
	case Green:
		system("color 2");
		break;
	case Red:
		system("color 4");
		break;
	case White:
		system("color 7");
		break;
	case Black:
		system("color 8");
		break;
	default:
		system("color 7");
		break;
	}
}

Color EnterColor()
{
	int clr = 0;
	std::cout << "\nEnter Color(Blue = 1, Green = 2, Red = 4, White = 7, Black = 8):";
	std::cin >> clr;
	switch (clr)
	{
	case 1:
		return Blue;
		break;
	case 2:
		return Green;
		break;
	case 4:
		return Red;
		break;
	case 7:
		return White;
		break;
	case 8:
		return Black;
		break;
	default:
		return White;
		break;
	}
}
 
