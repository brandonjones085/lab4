/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/24/2019
** Description:  The header file for the Student class
*******************************************************************************/

#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "Person.hpp"
#include <ctime>

class Student : public Person
{
  protected:
    double GPA;
    int randNum;

  public:
    Student();
    Student(std::string, int, double);
    virtual void doWork();
    virtual void printName();
    virtual void printNum();
    virtual void printAge();
};

#endif
