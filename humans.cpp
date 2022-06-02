#include "humans.h"
#include <iostream>
int Humans::counterPeople{ 1 };
void Humans::printHumans()
{
	cout << "\nНомер: " << iD;
	cout << "\nФамилия: " << surname;
	cout << "\nИмя: " << name;
	cout << "\nОтчество: " << patronymic;
	cout << "\nДата рождения: ";
	dataOfBirth.printDate();
}

void Humans::printNumberOfPeople()
{
	cout << "Всего человек: " << Humans::counterPeople;
}

Humans& Humans::setSurname(string surnameC)
{
	surname = surnameC;
	return *this;
}
Humans& Humans::setName(string nameC)
{
	name = nameC;
	return *this;
}

Humans& Humans::setPatronymic(string patronymicC)
{
	patronymic = patronymicC;
	return *this;
}
Humans& Humans::setHuman()
{
	string s, n, p;

	cout << "\nВведите: Фамилию, Имя, Отчество \n";
	cin >> s >> n >> p;
	setSurname(s).setName(n).setPatronymic(p);
	dataOfBirth.setDate();
	counterPeople++;
	iD = counterPeople;
	return *this;
}

