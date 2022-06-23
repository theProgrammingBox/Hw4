/*************************************************************************
 * AUTHOR     	 :
 * Assignment #4 : Operator Overloading & Friend Functions
 * CLASS      	 : CS 1C
 * SECTION    	 : MTWTTH 03:00pm - 05:35pm
 * DUE DATE   	 : 06/24/2022
 *************************************************************************/

#include "Programmer.h"
#include "SoftwareArchitect.h"

bool isPhoneNumberEqual(const Employee &employee, const Employee &employee2)
{
	if (employee.phone == employee2.phone)
	{
		cout << employee.phone << " is the same as " << employee2.phone << endl;
		return true;
	}
	cout << employee.phone << " is not the same as " << employee2.phone << endl;
	return false;
}

int main()
{
	Employee employee1;
	employee1.SetPhone(9495551234);
	Programmer programmer1;
	programmer1.SetPhone(9495551234);
	cout << "Compare 1: ";
	isPhoneNumberEqual(employee1, programmer1);
	programmer1.SetPhone(1111111111);
	cout << "Compare 2: ";
	isPhoneNumberEqual(employee1, programmer1);

	Employee employee2;
	employee2.SetPhone(9495551234);
	cout << "Compare 3: ";
	employee1 == employee2;
	employee2.SetPhone(1111111111);
	cout << "Compare 4: ";
	employee1 == employee2;

	Employee employee3;
	employee3.SetAge(30);
	employee3.addToAge(2);

	Employee employee4;
	employee4.SetAge(30);
	employee4 + 2;

	Employee employee5;
	cin >> employee5;
	cout << employee5 << endl;

	return 0;
}