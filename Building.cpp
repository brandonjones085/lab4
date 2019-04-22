#include "Building.hpp"

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