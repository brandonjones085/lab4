#include "University.hpp"
#include <string>
#include <iostream>

University::University()
{
    name = "Oregon State University";
    buildings = 0;
    people = 0;
}

University::University(int b, int p)
{
    buildings = b;
    people = p;
}

void University::printBuildingInfo()
{
    std::cout << "Building info " << buildings << std::endl;

    std::vector<Building *>::iterator it;
    int i = 0;
    for (it = buildingVector.begin(); it != buildingVector.end(); it++, i++)
    {
        buildingVector.at(i)->getAddress();
        buildingVector.at(i)->getBuildingName();
        buildingVector.at(i)->getSize();
    }
}

void University::printPeopleInfo()
{
    std::cout << "People info " << people << std::endl;
}

void University::addBuilding(Building *b)
{
    buildingVector.push_back(b);
}

void University::addPerson()
{
}