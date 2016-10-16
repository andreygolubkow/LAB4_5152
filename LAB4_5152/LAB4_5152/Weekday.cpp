#include "Weekday.h"
#include <iostream>

void printDay(int day)
{
	Weekday d;

	switch ((day-1)%7)
	{
	case(Monday):
		std::cout << "\nMon\n";
		break;
	case(Tuesday):
		std::cout << "\nTue\n";
		break;
	case(Wednesday):
		std::cout << "\nWed\n";
		break;
	case(Thursday):
		std::cout << "\nThu\n";
		break;
	case(Friday):
		std::cout << "\nFri\n";
		break;
	case(Saturday):
		std::cout << "\nSat\n";
		break;
	case(Sunday):
		std::cout << "\nSun\n";
		break;
	}

}