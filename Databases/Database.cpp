#include "Database.h"
#include "Vehicle.h"
#include "Car.h" 
#include "Tank.h"
#include <vector>

std::vector<Vehicle*> vehicleList;

using vehicleType = Vehicle::vehicleType;

using namespace std;



void Database::Add(vehicleType inputType)
{
	Vehicle* newVehicle = Create(inputType);

	
	newVehicle->Read(cin,cout);

	vehicleList.push_back (newVehicle);
}

Vehicle* Database::Create(Vehicle::vehicleType inputType)
{
	
	Vehicle* newVehicle = nullptr;

	switch (inputType) {
	case vehicleType::Car:
		newVehicle = new Car;
		break;
	case vehicleType::Tank:
		newVehicle = new Tank;
		break;
	}
	
	return newVehicle;
}

void Database::DisplayAll(std::ostream& outputStream)
{
	for (Vehicle* vehicle : vehicleList) {
		outputStream << "-----------------------------------" << endl;
		vehicle->Write(outputStream);
		outputStream << "-----------------------------------" << endl;
	}
}

void Database::Display(std::ostream& outputStream, const std::string& name)
{
	for (Vehicle* vehicle : vehicleList) {
		if (vehicle->getName() == name) {
			outputStream << "-----------------------------------" << endl;
			vehicle->Write(outputStream);
			outputStream << "-----------------------------------" << endl;
		}
	}
}

void Database::Display(std::ostream& outputStream, Vehicle::vehicleType type)
{
	for (Vehicle* vehicle : vehicleList) {
		if (vehicle->getType() == type) {
			outputStream << "-----------------------------------" << endl;
			vehicle->Write(outputStream);
			outputStream << "-----------------------------------" << endl;
		}
	}
}

void Database::Load(const std::string& filename)
{
	ifstream input(filename);

	if (input.is_open()) {
		Clear();
		while (!input.eof()) {
			int type;

			input >> type;

			Vehicle* newVehicle = Create(static_cast<vehicleType>(type));
			newVehicle->Read(input);
			vehicleList.push_back(newVehicle);

		}
	}

	input.close();

}

void Database::Save(const std::string& filename)
{
	ofstream output(filename);
	if (output.is_open()) {
		for (Vehicle* vehicle : vehicleList) {
			output << static_cast<int>(vehicle->getType()) << endl;
			vehicle->Write(output);
		}
	}

	output.close();
}

void Database::Clear() {

	vehicleList.clear();

}

Database::~Database()
{
	Clear();

	cout << "Database object destroyed";
}

void Database::testIterator()
{
	for (Vehicle* vehicle : vehicleList) {
		vehicle->Write(cout);
	}
}


