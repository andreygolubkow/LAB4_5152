
#include "Color.h"
#include "Month.h"
#include "Sex.h"
#include "Weekday.h"
#include "Person.h"
#include <iostream>
#include <string>

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
	Person p1("Ivan", "Ivanov", 20, Male);
	Person p2("Petr", "Petrov", 30, Male);
	cout << p1.fName << endl;
	p1.fName = "Andrey";
	cout << p1.fName << endl;
	Person *pP1 = &p1;
	cout << pP1 << endl;
	pP1->lName = "Petrov";
	cout<<pP1->lName << endl;
	PrintPerson(p1);
	
	Person *pDynPerson = new Person("Dinamyc","Person",10,Male);
	PrintPerson(*pDynPerson);
	ReadPerson(pDynPerson);
	PrintPerson(*pDynPerson);
	delete pDynPerson;

	Person *pPersonArray[5];
	for (int i = 0; i < 5; i++)
	{
		pPersonArray[i] = new Person;
		ReadPerson(pPersonArray[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		cout << i << " ";
		PrintPerson(*pPersonArray[i]);
	}
	for (int i = 0; i < 5; i++)
		delete pPersonArray[i];



    return 0;
}

