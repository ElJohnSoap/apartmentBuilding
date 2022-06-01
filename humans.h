#pragma once
#include <iostream>
using namespace std;
class Humans;

class Date
{
	int day;
	int month;
	int year;
public:
	Date(int dayP, int monthP, int yearP)
		:day{ dayP }, month{ monthP }, year{ yearP }{}
	//{ std::cout << "Date constructed for " << this << '\n'; }
	Date() : Date(1, 1, 0) {}
	~Date() {
		//std::cout << "Date destructed for "
			//<< this << '\n';
	}
	void printDate() {
		cout << day << '.' << month
			<< '.' << year << '\n';
	}
	Date& setDay(int dayP) { day = dayP; return *this; }
	Date& setMonth(int monthP) { month = monthP; return *this; }
	Date& setYear(int yearP) { year = yearP; return *this; }
};

class Humans
{
private:
	static int numberOfPeople; 
	int iD;
	string surname;
	string name;
	string patronymic;// отчество
	Date dataOfBirth;
public:
	
	Humans( string surnameC, string nameC, string patronymicC, Date data_of_birthC)
		: surname{ surnameC }, name{ nameC }, patronymic{ patronymicC }, dataOfBirth{ data_of_birthC}
	{
		iD = numberOfPeople;
	}
	Humans() : Humans("NoName", "NoName", "NoName", Date())
	{
		iD = numberOfPeople;
		numberOfPeople++;
	}
	~Humans(){ numberOfPeople--; }
	Humans (const Humans& human)
		: iD{ human.iD }, surname{ human.surname }, name{ human.name }, 
		  patronymic{ human.patronymic }, dataOfBirth{ human.dataOfBirth } {numberOfPeople++; }

	void printHumans();
	void printNumberOfPeople();

};


