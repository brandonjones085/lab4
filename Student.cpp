/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/24/2019
** Description:  The Student class inherits from the Person class
*******************************************************************************/

#include "Student.hpp"
#include <iostream>

//CONSTRUCTOR
Student::Student()
{
    this->personName = " ";
    this->personAge = 0;
    this->GPA = 0;
    srand(time(NULL));
}

Student::Student(std::string name, int age, double gpa)
    : Person(name, age)
{
    this->personName = name;
    this->personAge = age;
    this->GPA = gpa;
    srand(time(NULL));
}

/******************************************************************************* 
** Description:  The function returns the name of the student and a random 
number between 1 and 40
*******************************************************************************/
void Student::doWork()
{
    std::cout << getName() << " did " << getRandNum() << " hours of homework" << std::endl;
}

/******************************************************************************* 
** Description:  The function prints the name of the student
*******************************************************************************/
void Student::printName()
{
    std::cout << "Name: " << personName << std::endl;
}

/******************************************************************************* 
** Description:  The function prints the age of the student
*******************************************************************************/
void Student::printAge()
{
    std::cout << "Age: " << personAge << std::endl;
}

/******************************************************************************* 
** Description:  The function prints the GPA of student
*******************************************************************************/
void Student::printNum()
{
    std::cout << "GPA: " << GPA << std::endl;
}