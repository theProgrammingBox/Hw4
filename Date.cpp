#include "Date.h"

/*************************************************************************
 * MonthToString
 *************************************************************************
 * This function will convert the month to a string.
 *
 * Returns: string
 *************************************************************************/

string Date::MonthToString() const
{
	switch (month)
	{
	case 1:
		return "January";
	case 2:
		return "February";
	case 3:
		return "March";
	case 4:
		return "April";
	case 5:
		return "May";
	case 6:
		return "June";
	case 7:
		return "July";
	case 8:
		return "August";
	case 9:
		return "September";
	case 10:
		return "October";
	case 11:
		return "November";
	case 12:
		return "December";
	default:
		return "NA";
	}
}

/*************************************************************************
 * DayToString
 *************************************************************************
 * This function will convert the day to a string.
 *
 * Returns: string
 *************************************************************************/

string Date::DayToString() const
{
	if (day == -1)
	{
		return "NA";
	}
	return day < 10 ? "0" + to_string(day) : to_string(day);
}

/*************************************************************************
 * YearToString
 *************************************************************************
 * This function will convert the year to a string.
 *
 * Returns: string
 *************************************************************************/

string Date::YearToString() const
{
	if (year == -1)
	{
		return "NA";
	}
	return to_string(year);
}

/*************************************************************************
 * << operator
 *************************************************************************
 * This function overloads the << operator to print the date.
 * ______________________________________________________________________
 * PRE-CONDITIONS :
 * 	A date object (month, day, & year)
 * 
 * POST-CONDITIONS :
 * 	
 * Returns: ostream
 *************************************************************************/

ostream &operator<<(ostream &os, const Date &date)
{
	os << date.MonthToString() << " "
	   << date.DayToString() << ", "
	   << date.YearToString();
	return os;
}

istream& operator>>(istream &is, Date &date)
{
	cout << "Enter a month: ";
	is >> date.month;
	cout << "Enter a day: ";
	is >> date.day;
	cout << "Enter a year: ";
	is >> date.year;
	is.ignore();
	return is;
}