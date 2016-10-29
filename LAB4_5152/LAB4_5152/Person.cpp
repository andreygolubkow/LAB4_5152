#include "Person.h"

void PrintPerson(Person& person)
{
	std::cout << person.fName << '\t' << person.lName << "\t Age:" << person.age << "\t Sex:" << SexToStr(person.sex) << std::endl;
}

void ReadPerson(Person* person)
{
	std::cout << "\nEnter person first name:";
	std::cin >> person->fName;
	std::cout << "\nEnter person last name:";
	std::cin >> person->lName;
	std::cout << "\nEnter person age:";
	std::cin >> person->age;
	std::cout << "\nEnter person sex(Male,Female):";
	std::cin >> person->sex;
}


