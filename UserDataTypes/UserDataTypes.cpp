// UserDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Employee.h"
#include <iostream>

using namespace std;


int main()
{

    Employee employees[5];

    unsigned short numberOfEmployees;

    std::cout << "Enter number of employees: ";
    std::cin >> numberOfEmployees;

    for (int i = 0; i < numberOfEmployees; i++) {
        employees[i].Read();
    }

    for (int i = 0; i < numberOfEmployees; i++) {
        employees[i].Write();
    }


}

