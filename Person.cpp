/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/24/2019
** Description:  The Person class
*******************************************************************************/

#include "Person.hpp"
#include <iostream>
#include <ctime>

//CONSTRUCTOR
Person::Person()
{
    this->personName = " ";
    this->personAge = 0;
    srand(time(NULL));
}

Person::Person(std::string name, int age)
{
    this->personName = name;
    this->personAge = age;
    srand(time(NULL));
}

//returns the name of the person
std::string Person::getName()
{
    return personName;
}

//returns the age of the person
int Person::getAge()
{
    return personAge;
}

/******************************************************************************* 
** Description:  The function prints name of the person
*******************************************************************************/
void Person::printName()
{
    std::cout << "Name: " << personName << std::endl;
}

/******************************************************************************* 
** Description:  The function prints the age of the person
*******************************************************************************/
void Person::printAge()
{
    std::cout << "Age: " << personAge << std::endl;
}

/******************************************************************************* 
** Description:  The function returns a random number between 1 and 40
*******************************************************************************/
int Person::getRandNum()
{
    randNum = std::rand() % 40 + 1;
    return randNum;
}

void Person::doWork() {}

void Person::printNum() {}