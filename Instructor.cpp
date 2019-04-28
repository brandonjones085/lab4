/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/24/2019
** Description:  The Instructor class inherits from the Person class. 
*******************************************************************************/

#include "Instructor.hpp"
#include <iostream>

//CONSTRUCTOR
Instructor::Instructor()
{
    this->personName = " ";
    this->personAge = 0;
    this->rating = 0;
    srand(time(NULL));
}

Instructor::Instructor(std::string name, int age, double gpa)
    : Person(name, age)
{
    this->personName = name;
    this->personAge = age;
    this->rating = gpa;
    srand(time(NULL));
}

/******************************************************************************* 
** Description:  The function prints name and a random number betwen 1 and 40
*******************************************************************************/
void Instructor::doWork()
{
    std::cout << getName() << " graded papers for " << getRandNum() << " hours " << std::endl;
}

/******************************************************************************* 
** Description:  The function prints the name of the instructor
*******************************************************************************/
void Instructor::printName()
{
    std::cout << "Name: " << personName << std::endl;
}

/******************************************************************************* 
** Description:  The function prints the age of the instructor
*******************************************************************************/
void Instructor::printAge()
{
    std::cout << "Age " << personAge << std::endl;
}

/******************************************************************************* 
** Description:  The function prints the rating of instructor
*******************************************************************************/
void Instructor::printNum()
{
    std::cout << "Rating " << rating << std::endl;
}