#pragma once
#include "humans.h"

class Apartment
{
private:
	int apartNumb; // номер квартиры
	int quantityResid; //количество жителей
	Humans* residents; //массив с людьми

public:
	Apartment(int numbC, int numberOfInhabitantsC) : apartNumb{numbC}, quantityResid{numberOfInhabitantsC}
	{
		residents = new Humans[quantityResid];
	}
	Apartment() : Apartment(0,0) {}
	~Apartment()
	{
		delete[]residents;
	}

	void printApart();

	void printFullInfoApart();
	Apartment& fillApart();
	Apartment& setApartNumb(int apartNumbC);
	Apartment& setQuantityResid(int quantityResidC);
	Apartment& setApartment();
};


