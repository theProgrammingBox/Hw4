/*************************************************************************
 * AUTHOR     	 : Justin Gea
 * Assignment #4 : Operator Overloading & Friend Functions
 * CLASS      	 : CS 1C
 * SECTION    	 : MTWTTH 03:00pm - 05:35pm
 * DUE DATE   	 : 06/24/2022
 *************************************************************************/

#include "Programmer.h"

/*************************************************************************
 * Method IsPhoneNumberEqual: Class Employee
 * ----------------------------------------------------------------------
 * This function will compare the phone numbers of two employees.
 * ----------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		Two employee objects
 *
 * POST-CONDITIONS
 * 		returns true if the phone numbers are equal, false otherwise.
 *************************************************************************/

bool IsPhoneNumberEqual(const Employee &employee, const Employee &employee2)
{
	if (employee.phone == employee2.phone)
	{
		cout << employee.phone << " is the same as " << employee2.phone << endl;
		return true;
	}
	cout << employee.phone << " is not the same as " << employee2.phone << endl;
	return false;
}

/**********************************************************
 *
 * Operator Overloading & Friend Functions
 *_________________________________________________________
 * This program will demonstrate operator overloading and
 * friend functions through the use of the Employee class.
 *_________________________________________________________
 * INPUT:
 * None:	No user input is required.
 *
 * OUTPUT:
 * employee1:		The employee object's initial information.
 * employee2:		The employee object's initial information.
 * employee3:		The employee object's initial information.
 * employee4:		The employee object's initial information.
 * employee5:		The employee object's initial information.
 * programmer1:		The programmer object's initial information.
 ***********************************************************/

int main()
{
	Employee employee1;
	employee1.SetPhone(9495551234);
	Programmer programmer1;
	programmer1.SetPhone(9495551234);
	cout << "Compare 1: ";
	IsPhoneNumberEqual(employee1, programmer1);
	programmer1.SetPhone(1111111111);
	cout << "Compare 2: ";
	IsPhoneNumberEqual(employee1, programmer1);
	cout << endl;

	Employee employee2;
	employee2.SetPhone(9495551234);
	cout << "Compare 3: ";
	employee1 == employee2;
	employee2.SetPhone(1111111111);
	cout << "Compare 4: ";
	employee1 == employee2;
	cout << endl;

	Employee employee3;
	employee3.SetAge(30);
	employee3.AddToAge(2);
	cout << endl;

	Employee employee4;
	employee4.SetAge(30);
	employee4 + 2;
	cout << endl;

	Employee employee5;
	cin >> employee5;
	cout << employee5 << "\n\n";

	cout << "Test pre/post increment operations: " << endl;
	employee5.SetAge(0);
	cout << "\nemployee5:\n" << employee5 << endl;
	cout << "\nemployee5++:\n" << employee5++ << "\n\n";
	cout << "\nafter employee5++:\n" << employee5 << endl;
	employee5.SetAge(0);
	cout << "\nemployee5:\n" << employee5 << endl;
	cout << "\n++employee5:\n" << ++employee5 << endl;
	cout << "\nafter ++employee5:\n" << employee5 << endl;

	return 0;
}

/*
Which overloaded operator incurs the most overhead?

Answer: The overloaded operator that incurs the most overhead is the
overloaded operator ++ because it is the most complex.
*/