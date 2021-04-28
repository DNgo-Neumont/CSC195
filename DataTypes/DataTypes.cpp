// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string firstName;
    char initial;
    unsigned short age {0};
    bool isAdult {false};
    unsigned int zipCode {0};
    unsigned int wage {0};
    int daysWorked{ 0 };
    unsigned hoursPerDay[7]{0};
    unsigned int grossIncome{0};
    float netIncome{0.0f};


    const float TAX_RATE {0.1f};

    std::cout << "Enter your first name: ";
    std::cin >> firstName;
    
    std::cout << "Enter the first letter of your last name: ";
    std::cin >> initial;

    std::cout << "Enter your age: ";
    std::cin >> age;

    isAdult = age > 18;

    std::cout << "Please enter your zipcode. ";
    std::cin >> zipCode;

    std::cout << "Enter your wage in numbers without any symbols: ";
    std::cin >> wage;

    std::cout << "Enter the total amount of days you have worked to date for the year. ";
    std::cin >> daysWorked;

    for (int i = 0; i < daysWorked; ++i) {
        std::cout << "Enter the amount of hours you worked for day " << i + 1 << ": ";
        std::cin >> hoursPerDay[i];
    }
    
    unsigned int totalHours{ 0 };

    for (int b = 0; b < daysWorked; ++b) {
        totalHours += hoursPerDay[b];
    }

    grossIncome = totalHours * wage;
    netIncome = grossIncome - (grossIncome * TAX_RATE);

    std::cout << "Name: " << firstName << "\nInitial: " << initial << "\nAdult: " << isAdult << "\nZip: " << zipCode <<
        "\nWage: " << wage << "\nDays worked: " << daysWorked << "\nTotal Hours: " << totalHours << "\nGross income: " << grossIncome << "\nNet income: " << netIncome;



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
