//Eric Conard
//Manager.cpp
#include "Manager.h"
#include <iostream>

using namespace std;

Manager::Manager()
{
}
Manager::Manager(string Title, string Dept, string firstName, string lastName, int effRating, int Salary, string Notes) : Employee(firstName, lastName, effRating, Salary, Notes) //Create Manager with constructors
{
	title = Title;
	department = Dept;
	//cout << "Manager constructed " << getFName() << endl;
}
Manager::~Manager()		//Class destructor
{
	//cout << "Manager destructed " << getFName() << endl;
}
void Manager::setFName(string &firstName)
{
	Manager::fName = firstName;
}
string Manager::getFName()
{
	return Manager::fName;
}
void Manager::setLName(string &lastName)
{
	Manager::lName = lastName;
}
string Manager::getLName()
{
	return Manager::lName;
}
void Manager::setERating(int &Rating)
{
	Manager::eRating = Rating;
}
int Manager::getERating()
{
	return Manager::eRating;
}
void Manager::setSalary(int &Salary)
{
	Manager::salary = Salary;
}
int Manager::getSalary()
{
	return Manager::salary;
}
void Manager::setNotes(string &Notes)
{
	Manager::notes = Notes;
}
string Manager::getNotes()
{
	return Manager::notes;
}
void Manager::setTitle(string &Title)
{
	title = Title;
}
string Manager::getTitle()
{
	return title;
}
void Manager::setDept(string &Dept)
{
	department = Dept;
}
string Manager::getDept()
{
	return department;
}
void Manager::PrintValues()		//Use getters to print manager values
{
	cout << "~~~~~~~~~~Manager Info~~~~~~~~~~" << endl;
	cout << "\tName: " << getFName() << " " << getLName() << endl;
	cout << "\tTitle: " << getTitle() << endl;
	cout << "\tDepartment: " << getDept() << endl;
	cout << "\tEfficiency Rating: " << getERating() << endl;
	cout << "\tSalary: $" << getSalary() << endl;
	cout << "\tNotes: " << getNotes() << endl << endl;
	
}
Manager Manager::manInput()		//Gets user input to create a new manager
{
	string firstName, lastName, notes, dept, title;
	int effRating = 0, salary = 0;

	cout << "~~~~~~~~~~Manager Input~~~~~~~~~~" << endl;
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
	cout << "Title: ";
	getline(cin, title);
	//cin.ignore(1, '\n');
	cout << "Department: ";
	getline(cin, dept);
	//cin.ignore(1, '\n');
	cout << "Notes: ";
	getline(cin, notes);
	//cin.ignore(1, '\n');
	static Manager Temp;
	Temp = Manager(title, dept, firstName, lastName, effRating, salary, notes);
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	return Temp;
}