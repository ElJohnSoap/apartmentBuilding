

#include <iostream>
#include <string>
#include "humans.h"
#include "flat.h"
#include "House.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    //Date date1;
    //date1.printDate();

   // Humans human1("222", "2334", "344556", {10, 11,12});
    //Humans human2;
    //human1.printHumans();
    //human2.setHuman().printHumans();

    //Apartment flat0;
    //flat0.printApart();

    //flat0.setApartment();
    //flat0.printFullInfoApart();

    House house1;
    house1.initHouse();
    house1.printInfoHouse();
}

