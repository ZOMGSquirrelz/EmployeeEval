//Eric Conard
//Main.cpp with 2 coded inputs and 2 user inputs
//Requires Employee.h and Managers.h
#include "Employee.h"
#include "Manager.h"
#include <iostream>
#include <vector>
#include <string>

int main()
{
	vector<Employee> vEmp;		//Creat Employee vector storage
	vector<Manager> vMan;		//Create Manager vector storage
	Employee *Eric;		//Entry for employee
	Eric = new Employee("Eric", "Conard", 5, 100000, "Good Job");
	vEmp.push_back(*Eric);		//Adds to employee vector
	unique_ptr<Manager> Nina = make_unique<Manager>("Night Shift Manager", "Shoe Department", "Nina", "Conard", 4, 150000, "Needs Work");	//Entry for Manager
	vMan.push_back(*Nina);		//Add to manager vector

	Employee *empTest {};		//Making an employee with user input
	empTest = new Employee(empTest->empInput());
	vEmp.push_back(*empTest);		//Add to employee vector
	delete empTest;		//Delete empTest pointer

	Manager *manTest {};		//This time with a manager
	manTest = new Manager(manTest->manInput());
	vMan.push_back(*manTest);
	delete manTest;

	/*Employee *empTest;							This was me testing for user input
	empTest = new Employee();

	string fName, lName, Notes, Title, Dept;
	int eRating, Salary;

	cout << "First Name: ";
	cin >> fName;
	empTest->setFName(fName);
	cout << "Last Name: ";
	cin >> lName;
	empTest->setLName(lName);
	cout << "Efficiency rating (1 = low,5 = high): ";
	cin >> eRating;
	empTest->setERating(eRating);
	cout << "Salary: ";
	cin >> Salary;
	empTest->setSalary(Salary);
	cout << "Notes: ";
	cin.ignore();
	getline(cin, Notes);
	empTest->setNotes(Notes);
	vEmp.push_back(*empTest);

	Manager *manTest;
	manTest = new Manager();

	cout << "First Name: ";
	cin >> fName;
	manTest->setFName(fName);
	cout << "Last Name: ";
	cin >> lName;
	manTest->setLName(lName);
	cout << "Efficiency rating (1 = low,5 = high): ";
	cin >> eRating;
	manTest->setERating(eRating);
	cout << "Title: ";
	cin.ignore();
	getline(cin, Title);
	manTest->setTitle(Title);
	cout << "Department: ";
	cin.ignore();
	getline(cin, Dept);
	manTest->setDept(Dept);
	cout << "Salary: ";
	cin >> Salary;
	manTest->setSalary(Salary);
	cout << "Notes: ";
	cin.ignore();
	getline(cin, Notes);
	manTest->setNotes(Notes);
	vMan.push_back(*manTest);*/

	for(int i = 0; i < vEmp.size(); i++)		//Calls PrintValues function for each item in employee vector
	{
		vEmp[i].PrintValues();
	}
	for(int i = 0; i < vMan.size(); i++)		//Calls PrintValues function for each item in manager vector
	{
		vMan[i].PrintValues();
	}
}


