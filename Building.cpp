/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/24/2019
** Description:  The Building class
*******************************************************************************/

#include "Building.hpp"
#include <iostream>

//CONSTRUCTOR
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

/******************************************************************************* 
** Description:  The function prints name of the building
*******************************************************************************/
void Building::getBuildingName()
{
    std::cout << "Building Name: " << buildingName << std::endl;
}

/******************************************************************************* 
** Description:  The function prints address of the building
*******************************************************************************/
void Building::getAddress()
{
    std::cout << "Building Address: " << address << std::endl;
}

/******************************************************************************* 
** Description:  The function prints size of the building
*******************************************************************************/
void Building::getSize()
{
    std::cout << "Building Size: " << size << std::endl;
}
