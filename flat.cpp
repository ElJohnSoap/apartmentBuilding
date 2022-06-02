#include "flat.h"

void Apartment::printApart()
{
	cout << "\nНомер квартиры: " << apartNumb;
	cout << "\nКоличество проживающих: " << quantityResid;
}

void Apartment::printFullInfoApart()
{
	printApart();
	for (int i = 0; i < quantityResid; i++)
	{
		residents[i].printHumans();
	}
}

Apartment& Apartment::fillApart()
{
	residents = new Humans[quantityResid];
	for (int i = 0; i < quantityResid; i++)
	{
		residents[i].setHuman();
	}
	return *this;
}

Apartment& Apartment::setApartNumb(int apartNumbC)
{
	apartNumb = apartNumbC;
	return* this;
}

Apartment& Apartment::setQuantityResid(int quantityResidC)
{
	quantityResid = quantityResidC;
	return*this;
}
Apartment& Apartment::setApartment()
{
	int n, q;
	cout << "\nВведите номер квартиры и количество проживающих: \n";
	cin >> n >> q;
	setApartNumb(n).setQuantityResid(q).printApart();
	fillApart();
	return *this;
}


