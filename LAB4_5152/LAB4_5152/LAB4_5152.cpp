
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
	printDay(day);
	printMonth(day);
	SetColor(EnterColor());
	SetColor(EnterColor());

    return 0;
}

