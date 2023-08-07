//Eric Conard
//Employee.h
/*Constructor for first and last name, efficiency rating (1-5), notes, and salary
Have a virtual destructor and virtual accessors and getters for:
	first name, last name, eff rating, and salary
	getSalary, getfirstname, and get lastname will be virutal methods
	Include a virtual method called PrintValues() to output all info stored in Employee*/
#pragma once
#include <string>
using namespace std;

class Employee
{
protected:
	string fName, lName, notes;		//Variable declaration
	int eRating = 0, salary = 0;

public:
	Employee();		//Class creation
	Employee(string firstName, string lastName, int effRating, int salary, string notes);	//Class creation with constructors
	virtual ~Employee();	//Class destruction

	virtual void setFName(string &firstName);		//Getts and setters
	virtual string getFName();
	virtual void setLName(string &lastName);
	virtual string getLName();
	virtual void setERating(int &Rating);
	virtual int getERating();
	virtual void setSalary(int &Salary);
	virtual int getSalary();
	virtual void setNotes(string &Notes);
	virtual string getNotes();

	virtual void PrintValues();		//Print the employee values	

	Employee empInput();		//Get user input

};
