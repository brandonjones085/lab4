#include "University.hpp"
#include <string>
#include <iostream>

University::University()
{
    name = "Oregon State University";
    buildings = 0;
    people = 0;
}

void University::printBuildingInfo()
{
    std::cout << "Building info " << buildings << std::endl;
}

void University::printPeopleInfo()
{
    std::cout << "People info " << people << std::endl;
}
