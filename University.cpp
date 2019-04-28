/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/15/2019
** Description:  The University class
*******************************************************************************/

#include "University.hpp"
#include <string>
#include <iostream>

//CONSTRUCTOR
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

/******************************************************************************* 
** Description:  The function first prints the names of all the 
people in the person vector. 
//Source: http://www.cplusplus.com/reference/vector/vector/begin/
*******************************************************************************/
void University::printWork()
{
    std::vector<Person *>::iterator it;
    int i = 0;
    int num = 0;

    //Prints the names for user to select
    for (it = personVector.begin(); it != personVector.end(); it++, i++)
    {

        std::cout << "\n"
                  << i + 1 << " " << personVector.at(i)->getName();
        std::cout << std::endl;
    }
    std::cin >> num;
    personVector.at(num - 1)->doWork();

    std::cin.ignore();
    std::cin.clear();
    std::cin.sync();
}

/******************************************************************************* 
** Description:  The function prints the address, building name, 
and size of all the buildings in the building vector
//Source: http://www.cplusplus.com/reference/vector/vector/begin/
*******************************************************************************/
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
        std::cout << std::endl;
    }

    std::cin.ignore();
    std::cin.clear();
    std::cin.sync();
}

/******************************************************************************* 
** Description:  The function prints the name, age, and num for each
person within the personVector
//Source: http://www.cplusplus.com/reference/vector/vector/begin/
*******************************************************************************/
void University::printPeopleInfo()
{
    std::cout << "People info " << people << std::endl;

    std::vector<Person *>::iterator it;
    int i = 0;
    for (it = personVector.begin(); it != personVector.end(); it++, i++)
    {
        personVector.at(i)->printName();
        personVector.at(i)->getAge();
        personVector.at(i)->printNum();
        std::cout << std::endl;
    }
    std::cin.ignore();
    std::cin.clear();
    std::cin.sync();
}

/******************************************************************************* 
** Description:  The function takes a pointer and adds to buildingVector
//Source: http://www.cplusplus.com/reference/vector/vector/begin/
*******************************************************************************/
void University::addBuilding(Building *b)
{
    buildingVector.push_back(b);
}

/******************************************************************************* 
** Description:  The function takes a pointer and adds to the personVector
//Source: http://www.cplusplus.com/reference/vector/vector/begin/
*******************************************************************************/
void University::addPerson(Person *p)
{
    personVector.push_back(p);
}