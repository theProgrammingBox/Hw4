#include "Date.h"

/*************************************************************************
 * Method MonthToString: Class Date
 *------------------------------------------------------------------------
 * This function will convert the month to a string.
 *------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		returns a string of the month.
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
 * Method DayToString: Class Date
 * ----------------------------------------------------------------------
 * This function will convert the day to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		returns a string of the day.
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
 * Method YearToString: Class Date
 * ----------------------------------------------------------------------
 * This function will convert the year to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		returns a string of the year.
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
 * Method operator <<: Class Date
 * ----------------------------------------------------------------------
 * This function will output the date to the console.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		An ostream object and a Date object
 *
 * POST-CONDITIONS
 * 		returns an ostream object that contains the formatted date.
 *************************************************************************/

ostream &operator<<(ostream &os, const Date &date)
{
	os << date.MonthToString() << " "
	   << date.DayToString() << ", "
	   << date.YearToString();
	return os;
}

/*************************************************************************
 * Method operator >>: Class Date
 * ----------------------------------------------------------------------
 * This function will input the date from the console.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		An istream object and a Date object
 *
 * POST-CONDITIONS
 * 		returns an istream object that contains the formatted date.
 *************************************************************************/

istream& operator>>(istream &is, Date &date)
{
	cout << "Enter a month: ";
	is >> date.month;
	cout << "Enter a day: ";
	is >> date.day;
	cout << "Enter a year: ";
	is >> date.year;
	return is;
}