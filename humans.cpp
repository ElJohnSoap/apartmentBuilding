#include "humans.h"
#include <iostream>
int Humans::numberOfPeople{ 1 };
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
	cout << "Всего человек: " << Humans::numberOfPeople;
}