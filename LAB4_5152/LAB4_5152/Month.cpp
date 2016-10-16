#include "Month.h"
#include <iostream>

void printMonth(int day)
{
	int i = 0;
	for (i = 1; (i <= 12) && (day > 0); i++)
	{
		if (i % 2 == 0)
		{
			day -= 30;
		}
		else
		{
			day -= 31;
		}
	}
	i--;
	Month M = IntToMonth(i);
	switch (M)
	{
	case January:
		std::cout<<"January";
		break;
	case February:
		std::cout << "February";
		break;
	case March:
		std::cout << "March";
		break;
	case April:
		std::cout << "April";
		break;
	case May:
		std::cout << "May";
		break;
	case June:
		std::cout << "June";
		break;
	case July:
		std::cout << "July";
		break;
	case August:
		std::cout << "August";
		break;
	case September:
		std::cout << "September";
		break;
	case October:
		std::cout << "October";
		break;
	case November:
		std::cout << "November";
		break;
	case December:
		std::cout << "December";
		break;
	}
}

Month IntToMonth(int i)
{//January = 1, February, March, April, May, June, July, August, September, October, November, December
	switch (i)
	{
	case 1:
		return January;
		break;
	case 2:
		return February;
		break;
	case 3:
		return March;
		break;
	case 4:
		return April;
		break;
	case 5:
		return May;
		break;
	case 6:
		return June;
		break;
	case 7:
		return July;
		break;
	case 8: 
		return August;
		break;
	case 9:
		return September;
		break;
	case 10:
		return October;
		break;
	case 11:
		return November;
		break;
	case 12:
		return December;
		break;
	default:
		return January;
		break;
	}
}
