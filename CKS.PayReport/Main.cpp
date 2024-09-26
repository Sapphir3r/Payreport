
// Pay Report
// Cory Sillars

#include <iostream>
#include <conio.h>

using namespace std;
struct Employee {
	int ID;
	string FirstName;
	string LastName;
	float HoursWorked;
	float HourRate;
};


int main()
{
	cout << "How many employees: ";
	int numEmployees = 0;
	cin>> numEmployees;
	Employee* employee = new Employee[numEmployees];
	
	for (int i = 0; i < numEmployees; i++) {
		cout << "\nEnter the Id for Employee " << i+1 << ":";
		cin >> employee[i].ID;
		cout << "Enter the First Name for Employee " << i+1 << ":";
		cin >> employee[i].FirstName;
		cout << "Enter the Last Name for Employee " << i+1 << ":";
		cin >> employee[i].LastName;
		cout << "Enter the Hours Worked for Employee " << i+1 << ":";
		cin >> employee[i].HoursWorked;
		cout << "Enter the Hourly Rate for Employee " << i+1 << ":";
		cin >> employee[i].HourRate;
	}
	float totalPay = 0;

		cout << "\nPay Report\n";
	cout << "-----------------\n";
	for (int i = 0; i < numEmployees; i++)
	{
		float weeklyPay = employee[i].HoursWorked * employee[i].HourRate;
		cout << employee[i].ID << ". " << employee[i].FirstName << employee[i].LastName <<": $"<< weeklyPay<<"\n";
		totalPay += weeklyPay;
	}
	cout << "\nTotal pay: $"<<totalPay;
	(void)_getch();
	return 0;
}
