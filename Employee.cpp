//Eric Conard
//Employee.cpp
#include "Employee.h"
#include<iostream>
#include <string>

using namespace std;

Employee::Employee() {}

Employee::Employee(string firstName, string lastName, int effRating, int Salary, string Notes)	//Create Employee with constructors
{
	Employee::fName = firstName;
	Employee::lName = lastName;
	Employee::eRating = effRating;
	Employee::salary = Salary;
	Employee::notes = Notes;
	//cout << "Employee constructed " << getFName() << endl;
}
Employee::~Employee()	//Class destructor
{
	//cout << "Employee destructed " << getFName() << endl;
}
void Employee::setFName(string &firstName)
{
	Employee::fName = firstName;
}
string Employee::getFName()
{
	return Employee::fName;
}
void Employee::setLName(string &lastName)
{
	Employee::lName = lastName;
}
string Employee::getLName()
{
	return Employee::lName;
}
void Employee::setERating(int &Rating)
{
	Employee::eRating = Rating;
}
int Employee::getERating()
{
	return Employee::eRating;
}
void Employee::setSalary(int &Salary)
{
	Employee::salary = Salary;
}
int Employee::getSalary()
{
	return Employee::salary;
}
void Employee::setNotes(string &Notes)
{
	Employee::notes = Notes;
}
string Employee::getNotes()
{
	return Employee::notes;
}
void Employee::PrintValues()	//Use getters to print employee values
{
	cout << "~~~~~~~~~~Employee Info~~~~~~~~~~" << endl;
	cout << "\tName: " << getFName() << " " << getLName() << endl;
	cout << "\tEfficiency Rating: " << getERating() << endl;
	cout << "\tSalary: $" << getSalary() << endl;
	cout << "\tNotes: " << getNotes() << endl << endl;
}

Employee Employee::empInput()		//Get user input to create a new employee
{
	string firstName, lastName, notes;
	int effRating = 0, salary = 0;
	
	cout << "~~~~~~~~~~Employee Input~~~~~~~~~~" << endl;
	cout << "First Name: ";
	cin >> firstName;
	cin.ignore(1, '\n');
	cout << "Last Name: ";
	cin >> lastName;
	cin.ignore(1, '\n');
	cout << "Efficiency Rating (1-Low, 5-High): ";
	cin >> effRating;
	cin.ignore(1, '\n');
	cout << "Salary: ";
	cin >> salary;
	cin.ignore(1, '\n');
	cout << "Notes: ";
	getline(cin, notes);
	//cin.ignore(1, '\n');
	static Employee Temp;
	Temp = Employee(firstName, lastName, effRating, salary, notes);
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	return Temp;
}