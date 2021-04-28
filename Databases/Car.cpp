#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

const Vehicle::vehicleType type = Vehicle::vehicleType::Car;

string style;

string model;


Car::Car(std::string input) : Vehicle(input, type){
	cout << "Car object created: " << name << endl;
}

Car::Car() : Vehicle("placeholder", type) {
	cout << "Car object created: " << name << endl;
}

void Car::Accelerate(int input) {
	cout << "The car speeds up to " << input << " miles per hour." << endl;
}


void Car::Read(istream& inputStream, ostream& outputStream){
	Vehicle::Read(inputStream, outputStream);

	short selection;

	outputStream << "Enter the style of the car: " << endl;
	outputStream << "1. Sedan\n"
				 << "2. Coupe\n"
				 << "3. Hatchback\n"
				 << "4. Minivan" << endl;
	outputStream << "Enter a selection now: ";

	inputStream >> selection;

	bool endLoop = false;

	char yOrN;

	while (!endLoop) {
		outputStream << "Is this the correct choice? enter y or n" << endl;
		
		inputStream >> yOrN;
		
		if (yOrN == 'y') {
			endLoop = true;
		}
		else if (yOrN == 'n') {
			outputStream << "Enter the style of the car: " << endl;
			outputStream << "1. Sedan\n"
				<< "2. Coupe\n"
				<< "3. Hatchback\n"
				<< "4. Minivan" << endl;
			outputStream << "Enter a selection now: ";

			inputStream >> selection;
		}
		else {
			outputStream << "Please just enter y or n in lowercase.";
			yOrN = NULL;
		}
	}

	endLoop = false;


	while (!endLoop) {
		switch (selection) {
		case 1:
			style = "Sedan";
			endLoop = true;
			break;
		case 2:
			style = "Coupe";
			endLoop = true;
			break;
		case 3:
			style = "Hatchback";
			endLoop = true;
			break;
		case 4:
			style = "Minivan";
			endLoop = true;
			break;
		default:
			outputStream << "You entered an invalid selection!" << endl;
			outputStream << "Enter a new selection: " << endl;
			outputStream << "1. Sedan\n"
				<< "2. Coupe\n"
				<< "3. Hatchback\n"
				<< "4. Minivan" << endl;
			inputStream >> selection;
		}
	}
	
	endLoop = false;
	selection = 0;

	outputStream << "Enter the make of the car: " << endl;
	outputStream << "1. Toyota\n"
		<< "2. Hyundai\n"
		<< "3. Ford\n"
		<< "4. Chevrolet" << endl;
	outputStream << "Enter a selection now: ";

	inputStream >> selection;

	while (!endLoop) {
		outputStream << "Is this the correct choice? enter y or n" << endl;

		inputStream >> yOrN;

		if (yOrN == 'y') {
			endLoop = true;
		}
		else if (yOrN == 'n') {
			outputStream << "Enter the make of the car: " << endl;
			outputStream << "1. Toyota\n"
				<< "2. Hyundai\n"
				<< "3. Ford\n"
				<< "4. Chevrolet" << endl;
			outputStream << "Enter a selection now: ";

			inputStream >> selection;
		}
		else {
			outputStream << "Please just enter y or n in lowercase.";
			yOrN = NULL;
		}
	}

	endLoop = false;


	while (!endLoop) {
		switch (selection) {
		case 1:
			model = "Toyota";
			endLoop = true;
			break;
		case 2:
			model = "Hyundai";
			endLoop = true;
			break;
		case 3:
			model = "Ford";
			endLoop = true;
			break;
		case 4:
			model = "Chevrolet";
			endLoop = true;
			break;
		default:
			outputStream << "Enter the make of the car: " << endl;
			outputStream << "1. Toyota\n"
				<< "2. Hyundai\n"
				<< "3. Ford\n"
				<< "4. Chevrolet" << endl;
			outputStream << "Enter a selection now: ";

			inputStream >> selection;
		}
	}


}

void Car::Read(std::ifstream& fileReader)
{
	Vehicle::Read(fileReader);

	fileReader >> style;
	fileReader >> model;

}

void Car::Write(std::ofstream& fileWriter)
{
	Vehicle::Write(fileWriter);

	fileWriter << style;
	fileWriter << endl;
	fileWriter << model;
	fileWriter << endl;

}

void Car::Write(ostream& outputStream) {
	outputStream << "Name of car: " << getName() << endl;
	outputStream << "Fuel tank size: " << getTankSize() << endl;
	outputStream << "Car style: " << style << endl;
	outputStream << "Car make: " << model << endl;
}

Vehicle::vehicleType Car::getType() {
	return type;
}
