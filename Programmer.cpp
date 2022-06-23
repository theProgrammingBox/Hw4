#include "Programmer.h"

/*************************************************************************
 * DepartmentNumberToString
 *************************************************************************
 * This function will convert the department number to a string.
 *
 * Returns: string
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
 * SupervisorNameToString
 *************************************************************************
 * This function will convert the supervisor name to a string.
 *
 * Returns: string
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
 * PercentageIncreaseToString
 *************************************************************************
 * This function will convert the percentage increase to a string.
 *
 * Returns: string
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
 * KnowsCppToString
 *************************************************************************
 * This function will convert the knows C++ to a string.
 *
 * Returns: string
 *************************************************************************/

string Programmer::KnowsCppToString() const
{
	return knowsCpp ? "Yes" : "No";
}

/*************************************************************************
 * KnowsJavaToString
 *************************************************************************
 * This function will convert the knows Java to a string.
 *
 * Returns: string
 *************************************************************************/

string Programmer::KnowsJavaToString() const
{
	return knowsJava ? "Yes" : "No";
}

/*************************************************************************
 * << operator
 *************************************************************************
 * This function overloads the << operator to print the programmer.
 *
 * Returns: ostream
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