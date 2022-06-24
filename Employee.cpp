#include "Employee.h"

/*************************************************************************
 * Method NameToString: Class Employee
 * ----------------------------------------------------------------------
 * This function will convert the name to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		returns a string of the name.
 *************************************************************************/

string Employee::NameToString() const
{
	if (name == "")
	{
		return "NA";
	}
	return name;
}

/*************************************************************************
 * Method IDToString: Class Employee
 * ----------------------------------------------------------------------
 * This function will convert the ID to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		returns a string of the ID.
 *************************************************************************/

string Employee::IDToString() const
{
	if (id == -1)
	{
		return "NA";
	}
	return to_string(id);
}

/*************************************************************************
 * Method PhoneToString: Class Employee
 * ----------------------------------------------------------------------
 * This function will convert the phone number to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		returns a string of the phone number.
 *************************************************************************/

string Employee::PhoneToString() const
{
	if (phone == 0)
	{
		return "NA";
	}
	return to_string(phone).insert(3, "-").insert(7, "-");
}

/*************************************************************************
 * Method AgeToString: Class Employee
 * ----------------------------------------------------------------------
 * This function will convert the age to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		returns a string of the age.
 *************************************************************************/

string Employee::AgeToString() const
{
	if (age == -1)
	{
		return "NA";
	}
	return to_string(age);
}

/*************************************************************************
 * Method GenToString: Class Employee
 * ----------------------------------------------------------------------
 * This function will convert the Gen to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		returns a string of the Gen.
 *************************************************************************/

string Employee::GenToString() const
{
	if (gen == "")
	{
		return "NA";
	}
	return gen;
}

/*************************************************************************
 * Method JobToString: Class Employee
 * ----------------------------------------------------------------------
 * This function will convert the job to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		returns a string of the job.
 **************************************************************************/

string Employee::JobToString() const
{
	if (job == "")
	{
		return "NA";
	}
	return job;
}

/*************************************************************************
 * Method SalaryToString: Class Employee
 * ----------------------------------------------------------------------
 * This function will convert the salary to a string.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		returns a string of the salary.
 *************************************************************************/

string Employee::SalaryToString() const
{
	if (salary == 0)
	{
		return "NA";
	}
	string salaryStr = to_string(salary);
	string salaryStrOut = "";
	int index = 0;
	int size = salaryStr.size();
	while (index < size)
	{
		if ((size - index) % 3 == 0 && index != 0 && index != size - 1)
		{
			salaryStrOut += ",";
		}
		salaryStrOut += salaryStr[index];
		index++;
	}
	return "$" + salaryStrOut;
}

/*************************************************************************
 * Method operator <<: Class Employee
 * ----------------------------------------------------------------------
 * This function overloads the << operator to print the employee.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		An ostream object and an Employee object
 *
 * POST-CONDITIONS
 * 		returns an ostream object that contains the formatted date.
 *************************************************************************/

ostream &operator<<(ostream &os, const Employee &employee)
{
	cout << "Name: " << employee.NameToString()
		 << "\nID: " << employee.IDToString()
		 << "\nPhone: " << employee.PhoneToString()
		 << "\nAge: " << employee.AgeToString()
		 << "\nGen: " << employee.GenToString()
		 << "\nJob: " << employee.JobToString()
		 << "\nSalary: " << employee.SalaryToString()
		 << "\nHire Date: " << employee.hireDate;
	return os;
}

/*************************************************************************
 * Method operator >>: Class Employee
 * ----------------------------------------------------------------------
 * This function overloads the >> operator to read the employee.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		An istream object and an Employee object
 *
 * POST-CONDITIONS
 * 		returns an istream object that contains the formatted date.
 *************************************************************************/

istream &operator>>(istream &is, Employee &employee)
{
	cout << "Enter an employee name: ";
	getline(is, employee.name);

	cout << "Enter an employee id: ";
	is >> employee.id;

	cout << "Enter an employee phone number: ";
	is >> employee.phone;

	cout << "Enter an employee age: ";
	is >> employee.age;
	is.ignore(1000, '\n');

	cout << "Enter an employee gender: ";
	getline(is, employee.gen);

	cout << "Enter an employee job title: ";
	getline(is, employee.job);

	cout << "Enter the employee's salary: ";
	is >> employee.salary;

	is >> employee.hireDate;

	return is;
}

/*************************************************************************
 * Method operator ==: Class Employee
 * ----------------------------------------------------------------------
 * This function overloads the == operator to compare two employees.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		An Employee objects
 *
 * POST-CONDITIONS
 * 		returns a bool that is true if the two employees are equal.
 *************************************************************************/

bool Employee::operator==(const Employee &employee) const
{
	if (this->phone == employee.phone)
	{
		cout << phone << " is the same as " << employee.phone << endl;
		return true;
	}
	cout << phone << " is not the same as " << employee.phone << endl;
	return false;
}

/*************************************************************************
 * Method AddToAge: Class Employee
 * ----------------------------------------------------------------------
 * This function will add a number to the age.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		num: the number to add to the age
 *
 * POST-CONDITIONS
 * 		returns a bool that is true if the two employees are equal.
 *************************************************************************/

void Employee::AddToAge(int num)
{
	age += num;
	cout << num << " years were added to age.\n";
}

/*************************************************************************
 * Method operator +: Class Employee
 * ----------------------------------------------------------------------
 * This function overloads the + operator to add a number to the age.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		num: the number to add to the age
 *
 * POST-CONDITIONS
 * 		returns a bool that is true if the two employees are equal.
 *************************************************************************/

void Employee::operator+(int num)
{
	age += num;
	cout << num << " years were added to age.\n";
}

/*************************************************************************
 * Method operator ++: Class Employee
 * ----------------------------------------------------------------------
 * This function overloads the pre ++ operator to add a number to the age.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		preincrements the age by 1.
 *************************************************************************/

Employee &Employee::operator++()
{
	age++;
	return *this;
}

/*************************************************************************
 * Method operator ++: Class Employee
 * ----------------------------------------------------------------------
 * This function overloads the post ++ operator to add a number to the age.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		none
 *
 * POST-CONDITIONS
 * 		postincrements the age by 1.
 *************************************************************************/

Employee Employee::operator++(int)
{
	Employee temp = *this;
	age++;
	return temp;
}