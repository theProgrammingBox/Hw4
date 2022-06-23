#pragma once
#include "Date.h"

class Employee
{
private:
	string name;
	int id;
	long unsigned int phone;
	int age;
	string gen;
	string job;
	long unsigned int salary;
	Date hireDate;

	/***  MUTATORS ***/

	friend istream &operator>>(istream &is, Employee &employee);

	/***  ACCESSORS ***/

	string NameToString() const;
	string IDToString() const;
	string PhoneToString() const;
	string AgeToString() const;
	string GenToString() const;
	string JobToString() const;
	string SalaryToString() const;
	friend ostream &operator<<(ostream &os, const Employee &employee);

public:

	/*** CONSTRUCTOR & DESTRUCTOR ***/

	Employee() : name(""), id(-1), phone(0), age(-1), gen(""), job(""), salary(0), hireDate(){};
	Employee(string name, int id, long unsigned int phone, int age, string gen, string job, long unsigned int salary, int month, int day, int year)
		: name(name), id(id), phone(phone), age(age), gen(gen), job(job), salary(salary), hireDate(month, day, year){};
	~Employee(){};

	/***  MUTATORS ***/

	void SetName(string name) { this->name = name; }
	void SetId(int id) { this->id = id; }
	void SetPhone(long unsigned int phone) { this->phone = phone; }
	void SetAge(int age) { this->age = age; }
	void SetGen(string gen) { this->gen = gen; }
	void SetJob(string job) { this->job = job; }
	void SetSalary(long unsigned int salary) { this->salary = salary; }
	void SetHire(Date hireDate) { this->hireDate = hireDate; }
	void AddToAge(int num);
	void operator+(int num);

	/***  ACCESSORS ***/

	friend bool IsPhoneNumberEqual(const Employee &employee, const Employee &employee2);
	bool operator==(const Employee& employee) const;
};