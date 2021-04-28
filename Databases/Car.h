#pragma once
#include "Vehicle.h"
#include <string>
#include <iostream>
#include <istream>
#include <ostream>


class Car : public virtual Vehicle
{
public:
	Car(std::string input);

	Car();

	void Accelerate(int input);

	void Read(std::istream& inputStream, std::ostream& outputStream) override;

	void Read(std::ifstream& fileReader);

	void Write(std::ofstream& fileWriter);

	void Write(std::ostream& outputStream) override;
	
	vehicleType getType() override;
};

