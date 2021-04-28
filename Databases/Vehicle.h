#pragma once
#include <string>
#include <iostream>
#include <istream>
#include <ostream>
#include <fstream>

class Vehicle
{
	
	

public:

	enum class vehicleType {
		Car, //0
		Tank, //1
		Boat, //2
		Plane, //3
		Train //4
	};

	

	void setName(std::string input);

	void setTankSize(unsigned short input);
	
	Vehicle(std::string constructorString, vehicleType inputType);

	std::string getName();

	virtual vehicleType getType() = 0;

	int getTankSize();

	virtual void Read(std::istream& inputStream, std::ostream& outputStream);

	virtual void Read(std::ifstream& fileReader);

	virtual void Write(std::ofstream& outputStream);

	virtual void Write(std::ostream& OutputStream);

protected:

	std::string name;

	unsigned short tankSize;
};

