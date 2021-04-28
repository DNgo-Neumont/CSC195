#include "Employee.h";
#include <iostream>


const float TAX_RATE{ 0.1f };

int totalHours{ 0 };

float grossIncome{0.0f};
float netIncome{ 0.0f };

void Employee::Read() {
	std::cout << "Enter a name: ";
	std::cin >> name;

	std::cout << "Enter a age: ";
	std::cin >> age;

	std::cout << "Enter a zipcode: ";
	std::cin >> zipcode;

	std::cout << "Enter a wage: ";
	std::cin >> wage;

	std::cout << "Enter the total amount of days you worked: ";
	std::cin >> daysWorked;

	for (int i = 0; i < daysWorked; i++) {
		std::cout << "Enter the amount of hours worked for day " << i + 1 << ": ";
		std::cin >> hoursWorkedPerDay[i];
	}

	

	for (int b = 0; b < daysWorked; b++) {
		totalHours += hoursWorkedPerDay[b];
	}

	grossIncome = totalHours * wage;
	netIncome = grossIncome - (grossIncome * TAX_RATE);
}


void Employee::Write() {
	std::cout << "Employee Name: " << name << std::endl;

	std::cout << "Employee age: " << age << std::endl;

	std::cout << "Employee Zipcode: " << zipcode << std::endl;

	std::cout << "Employee wage: " << wage << std::endl;

	std::cout << "Total days this employee has worked: " << daysWorked << std::endl;

	std::cout << "Total hours this employee has worked: " << totalHours << std::endl;

	std::cout << "Gross income of this employee: " << grossIncome << std::endl;

	std::cout << "Net income of this employee: " << netIncome << std::endl;
}