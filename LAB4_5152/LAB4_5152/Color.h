#pragma once
#include <string>
enum Color //создали перечисление
{
	Blue = 1, Green = 2, Red = 4, White = 7, Black = 8
};

void SetColor(Color color);
Color EnterColor();