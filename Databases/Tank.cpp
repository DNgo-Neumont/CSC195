#include "Tank.h"
#include <string>
#include <fstream>

using namespace std;

int weight;

string make;

const Vehicle::vehicleType type = Vehicle::vehicleType::Tank;

Tank::Tank() : Vehicle("placeholder", type) {
	cout << "Tank object created: " << name << endl;
}

void Tank::Read(std::istream& inputStream, std::ostream& outputStream)
{
	Vehicle::Read(inputStream, outputStream);

	outputStream << "Enter weight of tank in numbers: " << endl;
	inputStream >> weight;

	bool endLoop = false;

	char yOrN;

	while (!endLoop) {
		outputStream << "Is this correct? y or n";
		inputStream >> yOrN;

		if (yOrN == 'y') {
			endLoop = true;
		}
		else if (yOrN == 'n') {
			outputStream << "Enter weight of tank in numbers: " << endl;
			inputStream >> weight;
		}
		else {
			outputStream << "Please just enter y or n, lowercase." << endl;
			yOrN = NULL;
		}
	}

	endLoop = false;
	int selection = 0;

	outputStream << "Enter the make of the tank: " << endl;
	outputStream << "1. German\n"
		<< "2. American\n"
		<< "3. British\n"
		<< "4. Russian" << endl;
	outputStream << "Enter a selection now: ";

	inputStream >> selection;

	while (!endLoop) {
		outputStream << "Is this the correct choice? enter y or n" << endl;

		inputStream >> yOrN;

		if (yOrN == 'y') {
			endLoop = true;
		}
		else if (yOrN == 'n') {
			outputStream << "Enter the make of the tank: " << endl;
			outputStream << "1. German\n"
				<< "2. American\n"
				<< "3. British\n"
				<< "4. Russian" << endl;
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
			make = "German";
			endLoop = true;
			break;
		case 2:
			make = "American";
			endLoop = true;
			break;
		case 3:
			make = "British";
			endLoop = true;
			break;
		case 4:
			make = "Russian";
			endLoop = true;
			break;
		default:
			outputStream << "Enter the make of the tank: " << endl;
			outputStream << "1. German\n"
				<< "2. American\n"
				<< "3. British\n"
				<< "4. Russian" << endl;
			outputStream << "Enter a selection now: ";
			
			inputStream >> selection;
		}
	}
}

void Tank::Read(std::ifstream& fileReader)
{
	Vehicle::Read(fileReader);

	fileReader >> weight;
	fileReader >> make;

}

void Tank::Write(std::ofstream& fileWriter)
{
	Vehicle::Write(fileWriter);

	fileWriter << weight;
	fileWriter << endl;
	fileWriter << make;
	fileWriter << endl;

}

void Tank::Write(std::ostream& outputStream)
{
	outputStream << "Tank name: " << getName() << endl;
	outputStream << "Fuel tank size: " << getTankSize() << endl;
	outputStream << "Tank weight: " << weight << endl;
	outputStream << "Tank make: " << make << endl;
}

void Tank::Fire() {
	cout << "Boom!" << endl;
}


Vehicle::vehicleType Tank::getType() {
	return type;
}