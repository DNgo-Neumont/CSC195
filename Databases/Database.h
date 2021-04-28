#pragma once
#include "Vehicle.h"


class Database
{
public:
	

	void Add(Vehicle::vehicleType inputType);



	void DisplayAll(std::ostream& outputStream);
	
	void Display(std::ostream& outputStream, const std::string& name);

	void Display(std::ostream& outputStream, Vehicle::vehicleType type);

	void Load(const std::string& filename); 
	
	void Save(const std::string& filename);

	void Clear();

	~Database();

	void testIterator();

private:

	Vehicle* Create(Vehicle::vehicleType inputType);


};

