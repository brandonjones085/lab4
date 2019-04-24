
#include "Building.hpp"
#include <iostream>

Building::Building()
{
    buildingName = " ";
    address = " ";
    size = 0;
}

Building::Building(std::string bName, std::string bAddress, int bSize)
{
    buildingName = bName;
    address = bAddress;
    size = bSize;
}

void Building::getBuildingName()
{
    std::cout << "Building Name: " << buildingName << std::endl;
}

void Building::getAddress()
{
    std::cout << "Building Address: " << address << std::endl;
}

void Building::getSize()
{
    std::cout << "Building Size: " << size << std::endl;
}
