#include "humans.h"
#include <iostream>
int Humans::numberOfPeople{ 1 };
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
	cout << "����� �������: " << Humans::numberOfPeople;
}