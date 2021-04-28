#pragma once
#include "Vehicle.h"
#include <istream>
#include <ostream>




class Tank :
    public virtual Vehicle
{
public:
    Tank();

    void Fire();

    void Read(std::istream& inputStream, std::ostream& outputStream) override;

    void Read(std::ifstream& fileReader);

    void Write(std::ofstream& fileWriter);

    void Write(std::ostream& outputStream) override;

    vehicleType getType();

};

