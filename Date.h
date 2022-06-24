#pragma once
#include "Header.h"

class Date
{
private:
	int month;
	int day;
	int year;

	string MonthToString() const;
	string DayToString() const;
	string YearToString() const;
	friend ostream &operator<<(ostream &os, const Date &date);
	friend istream& operator>>(istream &is, Date &date);

public:

	/*** CONSTRUCTOR & DESTRUCTOR ***/

	Date() : month(-1), day(-1), year(-1) {}
	Date(int month, int day, int year)
		: month(month), day(day), year(year) {}
	~Date(){};

	/***  MUTATORS ***/

	void SetMonth(int month) { this->month = month; }
	void SetDay(int day) { this->day = day; }
	void SetYear(int year) { this->year = year; }
};