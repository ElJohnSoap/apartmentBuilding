#include "humans.h"
#include <iostream>
int Humans::counterPeople{ 1 };
void Humans::printHumans()
{
	cout << "\n�����: " << iD;
	cout << "\n�������: " << surname;
	cout << "\n���: " << name;
	cout << "\n��������: " << patronymic;
	cout << "\n���� ��������: ";
	dataOfBirth.printDate();
}

void Humans::printNumberOfPeople()
{
	cout << "����� �������: " << Humans::counterPeople;
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

	cout << "\n�������: �������, ���, �������� \n";
	cin >> s >> n >> p;
	setSurname(s).setName(n).setPatronymic(p);
	dataOfBirth.setDate();
	counterPeople++;
	iD = counterPeople;
	return *this;
}

