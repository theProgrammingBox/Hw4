#include "Programmer.h"

/*************************************************************************
 * Method DepartmentNumberToString: Class Programmer
 * ----------------------------------------------------------------------
 * This function will convert the department number to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		returns a string of the department number.
 *************************************************************************/

string Programmer::DepartmentNumberToString() const
{
	if (departmentNumber == -1)
	{
		return "NA";
	}
	return to_string(departmentNumber);
}

/*************************************************************************
 * Method SupervisorNameToString: Class Programmer
 * ----------------------------------------------------------------------
 * This function will convert the supervisor name to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		returns a string of the supervisor name.
 *************************************************************************/

string Programmer::SupervisorNameToString() const
{
	if (supervisorName == "")
	{
		return "NA";
	}
	return supervisorName;
}

/*************************************************************************
 * Method PercentageIncreaseToString: Class Programmer
 * ----------------------------------------------------------------------
 * This function will convert the percentage increase to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		returns a string of the percentage increase.
 *************************************************************************/

string Programmer::PercentageIncreaseToString() const
{
	if (percentageIncrease == -1)
	{
		return "NA";
	}
	return to_string(percentageIncrease) + "%";
}

/*************************************************************************
 * Method KnowsCppToString: Class Programmer
 * ----------------------------------------------------------------------
 * This function will convert if the programmer knows C++ to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		returns a string of if the programmer knows C++.
 *************************************************************************/

string Programmer::KnowsCppToString() const
{
	return knowsCpp ? "Yes" : "No";
}

/*************************************************************************
 * Method KnowsJavaToString: Class Programmer
 * ----------------------------------------------------------------------
 * This function will convert if the programmer knows Java to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		returns a string of if the programmer knows Java.
 *************************************************************************/

string Programmer::KnowsJavaToString() const
{
	return knowsJava ? "Yes" : "No";
}

/*************************************************************************
 * Method operator <<: Class Programmer
 * ----------------------------------------------------------------------
 * This function will output the programmer to the console.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		An ostream object and a Programmer object
 *
 * POST-CONDITIONS
 * 		returns an ostream object that contains the formatted programmer.
 *************************************************************************/

ostream &operator<<(ostream &os, const Programmer &Programmer)
{
	cout << Employee(Programmer)
		 << "\nDepartment Number: " << Programmer.DepartmentNumberToString()
		 << "\nSupervisor Name: " << Programmer.SupervisorNameToString()
		 << "\nPercentage Increase: " << Programmer.PercentageIncreaseToString()
		 << "\nKnows C++: " << Programmer.KnowsCppToString()
		 << "\nKnows Java: " << Programmer.KnowsJavaToString();
	return os;
}