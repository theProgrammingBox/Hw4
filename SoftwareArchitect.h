#pragma once
#include "Employee.h"

class SoftwareArchitect : public Employee
{
private:
	int departmentNumber;
	string supervisorName;
	int percentageIncrease;
	int yearsOfExperience;

	string DepartmentNumberToString() const;
	string SupervisorNameToString() const;
	string PercentageIncreaseToString() const;
	string YearsOfExperienceToString() const;
	friend ostream &operator<<(ostream &os, const SoftwareArchitect &softwareArchitect);

public:
	SoftwareArchitect() : Employee(), departmentNumber(-1), supervisorName(""), percentageIncrease(-1), yearsOfExperience(-1){};
	SoftwareArchitect(string name, int id, long unsigned int phone, int age, string gen, string job, long unsigned int salary, Date hireData, int departmentNumber, string supervisorName, int percentageIncrease, int yearsOfExperience)
		: Employee(name, id, phone, age, gen, job, salary, hireData), departmentNumber(departmentNumber), supervisorName(supervisorName), percentageIncrease(percentageIncrease), yearsOfExperience(yearsOfExperience){};
	~SoftwareArchitect(){};

	void SetDepartmentNumber(int departmentNumber) { this->departmentNumber = departmentNumber; }
	void SetSupervisorName(string supervisorName) { this->supervisorName = supervisorName; }
	void SetPercentageIncrease(int percentageIncrease) { this->percentageIncrease = percentageIncrease; }
	void SetYearsOfExperience(int yearsOfExperience) { this->yearsOfExperience = yearsOfExperience; }
};