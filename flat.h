#pragma once
#include "humans.h"
class Flat
{
private:
	int numb; // номер квартиры
	int quantityResid; //количество жителей
	Humans* residents; //массив с людьми

public:
	Flat(int numbC, int numberOfInhabitantsC) : numb{numbC}, quantityResid{numberOfInhabitantsC}
	{
		residents = new Humans[quantityResid];
	}
	Flat() : Flat(0,0) {}
	~Flat()
	{
		delete[]residents;
	}
	void printFlat()
	{
		cout << "\nНомер квартиры: " << numb;
		cout << "\nКоличество проживающих: " << quantityResid;
	}
};


