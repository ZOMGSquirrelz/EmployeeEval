//Eric Conard
//Manager.h
/*Inherits from Employee
Virtual class shall have a constructor that takes same info as employee(first, last, rating, notes, salary)
	but also include managers title and department
Include virtual methods for getSalary, getEfficiency, and PrintValues
	PrintValues will output all info about the manager*/
#pragma once
#include "Employee.h"

class Manager : private Employee	//Manager class inherits privately from Employee
{
protected:
	string title, department;		//Variable declaration
public:
	Manager();		//Class creation
	Manager(string Title, string Dept, string firstName, string lastName, int effRating, int Salary, string Notes); //: Employee(firstName, lastName, effRating, Salary, Notes);
	~Manager();		//Class destruction

	void setFName(string &firstName) override;		//Getters and Setters
	string getFName() override;
	void setLName(string &lastName) override;
	string getLName() override;
	void setERating(int &Rating) override;
	int getERating() override;
	void setSalary(int &Salary) override;
	int getSalary() override;
	void setNotes(string &Notes) override;
	string getNotes() override;
	void setTitle(string &Title);
	string getTitle();
	void setDept(string &Dept);
	string getDept();

	void PrintValues() override;		//Print the manager values

	Manager manInput() ;		//Get user input
};