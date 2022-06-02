#pragma once
#include "flat.h"
class House
{
private:
	int sizeHouse; //���������� �������
	Apartment* arrApart; //������ � � ����������

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

