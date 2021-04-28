#include "Vehicle.h"
#include <string>
#include <fstream>

using namespace std;

using vehicleType = Vehicle::vehicleType;

string name;

vehicleType type;

int convertedType = static_cast<int>(type);

unsigned short tankSize;



Vehicle::Vehicle(string inputName, vehicleType typeInput) {
	name = inputName;
	type = typeInput;

	cout << "Vehicle object created: " << name << endl;
}




void Vehicle::setName(string inputName) {
	name = inputName;
}

void Vehicle::setTankSize(unsigned short input)
{
	tankSize = input;
}

string Vehicle::getName() {
	return name;
}

vehicleType Vehicle::getType()
{
	return type;
}

int Vehicle::getTankSize()
{
	return tankSize;
}

void Vehicle::Read(istream& inputStream, ostream& outputStream)
{
	char yOrN;

	bool endLoop = false;

	//Repeated here for UI purposes; just easier to do this than finangle a while loop
	outputStream << "Enter a name for this vehicle: " << endl;
	inputStream >> name;

	while (!endLoop) {
		outputStream << "Is this correct? y or n" << endl;

		inputStream >> yOrN;

		if (yOrN == 'y') {
			endLoop = true;
		}
		else if (yOrN == 'n') {
			outputStream << "Enter a name for this vehicle: " << endl;
			inputStream >> name;
		}
		else {
			outputStream << "Enter only y or n in lowercase" << endl;
			yOrN = NULL;
		}
	}

	endLoop = false;

	outputStream << "Enter the size of the vehicle's gas tank in straight numbers: " << endl;
	inputStream >> tankSize;

	while (!endLoop) {
		outputStream << "Is this correct? y or n" << endl;

		inputStream >> yOrN;

		if (yOrN == 'y') {
			endLoop = true;
		}
		else if (yOrN == 'n') {
			outputStream << "Enter the correct size of gas tank for this vehicle: " << endl;
			inputStream >> tankSize;
		}
		else {
			outputStream << "Enter only y or n in lowercase" << endl;
			yOrN = NULL;
		}
	}

}

void Vehicle::Read(std::ifstream& fileReader){
	fileReader >> name;
	fileReader >> tankSize;
}

void Vehicle::Write(std::ofstream& fileWriter)
{
	fileWriter << endl;
	fileWriter << name;
	fileWriter << endl;
	fileWriter << tankSize;
	fileWriter << endl;
}

void Vehicle::Write(std::ostream& OutputStream)
{
	//unused definition to keep header files happy
}
