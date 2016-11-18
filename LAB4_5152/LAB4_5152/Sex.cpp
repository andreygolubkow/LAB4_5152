#include "Sex.h"

std::string SexToStr(Sex sex) //конвертация пол в строку
{
	switch (sex)
	{
	case (Male):
		return "Male";
	case (Female):
		return "Female";
	default:
			return "Female";
	}
}

Sex StrToSex(std::string sex)//Строка в пол
{
	//std::transform(sex.begin(), sex.end(), sex.begin(), ::tolower);
	if (sex == "m")
	{
		return Male;
	}
	else
	{
		return Female;
	}
}


std::istream& operator >> (std::istream& is, Sex& i) //переопределяем оператор ввода
{
	int tmp;
	if (is >> tmp)
		i = static_cast<Sex>(tmp);
	return is;
}