#include "SoftwareArchitect.h"

/*************************************************************************
 * Method DepartmentNumberToString: Class SoftwareArchitect
 * ----------------------------------------------------------------------
 * This function will convert the department number to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		returns a string of the department number.
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
 * Method SupervisorNameToString: Class SoftwareArchitect
 * ----------------------------------------------------------------------
 * This function will convert the supervisor name to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		returns a string of the supervisor name.
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
 * Method PercentageIncreaseToString: Class SoftwareArchitect
 * ----------------------------------------------------------------------
 * This function will convert the percentage increase to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		returns a string of the percentage increase.
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
 * Method YearsOfExperienceToString: Class SoftwareArchitect
 * ----------------------------------------------------------------------
 * This function will convert the years of experience to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		returns a string of the years of experience.
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
 * Method operator <<: Class SoftwareArchitect
 * ----------------------------------------------------------------------
 * This function will output the SoftwareArchitect object to the console.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		returns a string of the SoftwareArchitect object.
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