#pragma once
#include <iostream>
#include <string>
#include <limits>
#include "Sex.h"

struct Person
{
	std::string fName, lName;
	int age;
	Sex sex;
	Person(std::string firstName = "", std::string lastName = "", int Age = 0, Sex Sex = Male)
	{
		fName = firstName;
		lName = lastName;
		age = Age;
		sex = Sex;
	}

};

void PrintPerson(Person& person);
void ReadPerson(Person* person);