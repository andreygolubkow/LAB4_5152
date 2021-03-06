
#include "Color.h"
#include "Month.h"
#include "Sex.h"
#include "Weekday.h"
#include "Person.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void show_vector(vector<int>&a) //Вывод вектора
{
	for (vector<int>::iterator it = a.begin(); it != a.end(); ++it)
		cout << *it << " ";
}

int main()
{
	int day = 0;
	cout<<"Vvedite nomer dnya(1-365): ";
	while (day < 1 || day>365)
	{
		cin >> day;
		if (day < 1 && day>365)
		{
			cout << "\nInvalid day! -> "; //Считали номер дня
		}
	}
	{
		printDay(day);//вывели день
		printMonth(day);//вывели месяц
		SetColor(EnterColor());//установили цвет консоли
		SetColor(EnterColor());
		Person p1("Ivan", "Ivanov", 20, Male);//работаем с персонами
		Person p2("Petr", "Petrov", 30, Male);
		cout << p1.fName << endl;
		p1.fName = "Andrey";
		cout << p1.fName << endl;
		Person *pP1 = &p1;
		cout << pP1 << endl;
		pP1->lName = "Petrov";
		cout << pP1->lName << endl;
		PrintPerson(p1);
	}
	
	Person *pPersonArray[5];
	for (int i = 0; i < 5; i++)
	{
		Person *pDynPerson = new Person("Dinamyc", "Person", 10, Male);//Динамически созданная персона
		ReadPerson(pDynPerson);
		pPersonArray[i] = pDynPerson;
		pDynPerson = nullptr;
	}
	for (int i = 0; i < 5; i++)
	{
			cout << i << " ";
			PrintPerson(*pPersonArray[i]);//выводим всех персон на экран
	}
	for (int i = 0; i < 5; i++)
	delete pPersonArray[i];

	vector<int> myVector;//работаем с вектором
	myVector.reserve(5);
	for (int i = 5; i < 10; i++)
		myVector.push_back(i);
	myVector.erase(myVector.begin() + 3);
	myVector.insert(myVector.begin() + 2, 9999);
	show_vector(myVector);


    return 0;
}

