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

//Source: http://www.cplusplus.com/reference/vector/vector/begin/
void University::printBuildingInfo()
{
    std::cout << " Building info " << buildings << std::endl;

    std::vector<Building *>::iterator it;
    int i = 0;
    for (it = buildingVector.begin(); it != buildingVector.end(); it++, i++)
    {
        buildingVector.at(i)->getAddress();
        buildingVector.at(i)->getBuildingName();
        buildingVector.at(i)->getSize();
    }

    std::cin.ignore();
    std::cin.clear();
    std::cin.sync();
}

//Source: http://www.cplusplus.com/reference/vector/vector/begin/
void University::printPeopleInfo()
{
    std::cout << "People info " << people << std::endl;

    std::vector<Person *>::iterator it;
    int i = 0;
    for (it = personVector.begin(); it != personVector.end(); it++, i++)
    {
        personVector.at(i)->printName();
    }
    std::cin.ignore();
    std::cin.clear();
    std::cin.sync();
}

void University::addBuilding(Building *b)
{
    buildingVector.push_back(b);
}

void University::addPerson(Person *p)
{
    personVector.push_back(p);
}