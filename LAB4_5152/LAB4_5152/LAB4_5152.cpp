// LAB4_5152.cpp: определяет точку входа для консольного приложения.
//

#include "Color.h"
#include "Month.h"
#include "Sex.h"
#include "Weekday.h"
#include <iostream>

using namespace std;
int main()
{
	int day = 0;
	cout<<"Vvedite nomer dnya(1-365): ";
	while (day < 1 || day>365)
	{
		cin >> day;
		if (day < 1 && day>365)
		{
			cout << "\nInvalid day! -> ";
		}
	}


    return 0;
}

