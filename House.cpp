#include "House.h"

House& House::initHouse()
{
	cout << "\nВведите количество квартир: \n";
	int s;
	cin >> s;
	setSizeHouse(s);
	//House house1(s);
	for (int i = 0; i < s; i++)
	{
		arrApart[i].setApartment();
	}
	return *this;
}

void House::printInfoHouse()
{
	for (int i = 0; i < sizeHouse; i++)
	{
		arrApart[i].printFullInfoApart();
	}
}
