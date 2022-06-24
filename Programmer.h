#pragma once
#include "Employee.h"

class Programmer : public Employee
{
private:
	int departmentNumber;
	string supervisorName;
	int percentageIncrease;
	bool knowsCpp;
	bool knowsJava;

	string DepartmentNumberToString() const;
	string SupervisorNameToString() const;
	string PercentageIncreaseToString() const;
	string KnowsCppToString() const;
	string KnowsJavaToString() const;
	friend ostream &operator<<(ostream &os, const Programmer &programmer);

public:
	/*** CONSTRUCTOR & DESTRUCTOR ***/

	Programmer() : Employee(), departmentNumber(-1), supervisorName(""), percentageIncrease(-1), knowsCpp(false), knowsJava(false){};
	Programmer(string name, int id, long unsigned int phone, int age, string gen, string job, long unsigned int salary, int month, int day, int year, int departmentNumber, string supervisorName, int percentageIncrease, bool knowsCpp, bool knowsJava)
		: Employee(name, id, phone, age, gen, job, salary, month, day, year), departmentNumber(departmentNumber), supervisorName(supervisorName), percentageIncrease(percentageIncrease), knowsCpp(knowsCpp), knowsJava(knowsJava){};
	~Programmer() {}

	/*** MUTATORS ***/

	void SetDepartmentNumber(int departmentNumber) { this->departmentNumber = departmentNumber; }
	void SetSupervisorName(string supervisorName) { this->supervisorName = supervisorName; }
	void SetPercentageIncrease(float percentageIncrease) { this->percentageIncrease = percentageIncrease; }
	void SetKnowsCpp(bool knowsCpp) { this->knowsCpp = knowsCpp; }
	void SetKnowsJava(bool knowsJava) { this->knowsJava = knowsJava; }
};