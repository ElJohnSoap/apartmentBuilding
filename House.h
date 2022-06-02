#pragma once
#include "flat.h"
class House
{
private:
	int sizeHouse; //количество квартир
	Apartment* arrApart; //массив с с квартирами

public:
	House(int size) : sizeHouse {size}
	{
		arrApart = new Apartment[size];
	}
	House() : House (0){}

	~House()
	{
		delete[]arrApart;
	}
	House& setSizeHouse(int size)
	{
		sizeHouse = size;
		return *this;
	}
};

