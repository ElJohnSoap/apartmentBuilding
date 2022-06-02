#pragma once
#include <iostream>
#include <string>
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

	Date() : Date(1, 1, 0) {}
	~Date() {}

	void printDate() {
		cout << day << '.' << month
			<< '.' << year << '\n';
	}
	Date(const Date& date) : day {date.day}, month{date.month}, year{date.year}	{}

	Date& setDay(int dayP)
	{
		while (dayP > 31 || dayP < 0)
		{
			cout << "Повторите ввод дня: ";
			cin >> dayP;
		}
		day = dayP; return *this;
	}
	Date& setMonth(int monthP)
	{
		while (monthP > 12 || monthP < 0)
		{
			cout << "Повторите ввод дня: ";
			cin >> monthP;
		}
		month = monthP; return *this;
	}
	Date& setYear(int yearP) { year = yearP; return *this; }
	
	void setDate()
	{
		int d,m,y;
		cout << "Введите день, месяц и год рождения: \n";
		cin >> d >> m >> y;
		setDay(d).setMonth(m).setYear(y); //можно сделать ввод наоборот и ввести проверку, но пока пропустим
		//return *this;
	}
};

class Humans
{
private:
	static int counterPeople; 
	int iD;
	string surname;
	string name;
	string patronymic;// отчество
	Date dataOfBirth;
public:
	
	Humans( string surnameC, string nameC, string patronymicC, Date data_of_birthC)
		: surname{ surnameC }, name{ nameC }, patronymic{ patronymicC }, dataOfBirth{ data_of_birthC}
	{
		iD = counterPeople;
	}
	Humans() : Humans("NoName", "NoName", "NoName", Date())
	{
		iD = counterPeople;
		counterPeople++;
	}
	~Humans(){ counterPeople--; }
	Humans (const Humans& human)
		: iD{ human.iD }, surname{ human.surname }, name{ human.name }, 
		  patronymic{ human.patronymic }, dataOfBirth{ human.dataOfBirth } {counterPeople++; }

	void printHumans();
	void printNumberOfPeople();

	Humans& setSurname(string surnameC);
	Humans& setName(string nameC);
	Humans& setPatronymic(string patronymicC);
	
	Humans& setHuman();
	
};


