// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Database.h"
#include "Vehicle.h"

using namespace std;

int main()
{
	Database workingList;
	string nameInput;
	short selectVehicle;
	string filename;

	cout << "Welcome to the Vehicle Database program" << endl;
	cout << "Please enter a choice." << endl;

	bool endProgram = false;

	while (!endProgram) {

		short selection;

		cout << "Main Menu: \n";
		cout << "1. Add a vehicle" << endl;
		cout << "2. Display all vehicles" << endl;
		cout << "3. Display by name" << endl;
		cout << "4. Display by type" << endl;
		cout << "5. Save list" << endl;
		cout << "6. Load list" << endl;
		cout << "7. Exit" << endl;

		cout << "Enter your selection below: " << endl;

		cin >> selection;

		switch (selection) {
		case 1:
			
			selectVehicle = 0;

			cout << "Select a vehicle to create: " << endl;
			cout << "1. Create a car" << endl;
			cout << "2. Create a tank" << endl;
			cout << "Enter a selection now. ";

			cin >> selectVehicle;

			workingList.Add(static_cast<Vehicle::vehicleType>(selectVehicle - 1));

			cout << "Vehicle created." << endl;
			break;
		case 2:
			workingList.DisplayAll(cout);
			break;
		case 3:
			
			cout << "Enter a name: ";
			cin >> nameInput;

			workingList.Display(cout, nameInput);
			break;
		case 4:
			selectVehicle = 0;

			cout << "Enter the number for which vehicle you want to search for. " << endl;
			cout << "1. Car\n";
			cout << "2. Tank\n";
			cout << "Enter your selection now." << endl;

			cin >> selectVehicle;

			workingList.Display(cout, static_cast<Vehicle::vehicleType>(selectVehicle - 1));
			break;


		case 5:
			cout << "Enter a filename: " << endl;
			cin >> filename;
			workingList.Save(filename);

			filename = "";

			break;
		case 6:
			
			cout << "Enter a filename: " << endl;
			cin >> filename;
			workingList.testIterator();
			workingList.Load(filename);

			filename = "";

			break;
		case 7:
			workingList.Clear();

			cout << "Goodbye.";

			endProgram = true;

			break;
		default:
			cout << "Please pick a valid choice.";
			break;
		}
	}

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
