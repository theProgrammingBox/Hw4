#include "SoftwareArchitect.h"

/*************************************************************************
 * DepartmentNumberToString
 *************************************************************************
 * This function will convert the department number to a string.
 *
 * Returns: string
 *************************************************************************/

string SoftwareArchitect::DepartmentNumberToString() const
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

string SoftwareArchitect::SupervisorNameToString() const
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

string SoftwareArchitect::PercentageIncreaseToString() const
{
	if (percentageIncrease == -1)
	{
		return "NA";
	}
	return to_string(percentageIncrease) + "%";
}

/*************************************************************************
 * YearsOfExperienceToString
 *************************************************************************
 * This function will convert the years of experience to a string.
 *
 * Returns: string
 *************************************************************************/

string SoftwareArchitect::YearsOfExperienceToString() const
{
	if (yearsOfExperience == -1)
	{
		return "NA";
	}
	return to_string(yearsOfExperience);
}

/*************************************************************************
 * << operator
 *************************************************************************
 * This function overloads the << operator to print the software architect.
 *
 * Returns: ostream
 *************************************************************************/

ostream &operator<<(ostream &os, const SoftwareArchitect &softwareArchitect)
{
	cout << Employee(softwareArchitect)
		 << "\nDepartment Number: " << softwareArchitect.DepartmentNumberToString()
		 << "\nSupervisor Name: " << softwareArchitect.SupervisorNameToString()
		 << "\nPercentage Increase: " << softwareArchitect.PercentageIncreaseToString()
		 << "\nYears of Experience: " << softwareArchitect.YearsOfExperienceToString();
	return os;
}