/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/24/2019
** Description:  The header file for the Instructor class
*******************************************************************************/

#ifndef INSTRUCTOR_HPP
#define INSTRUCTOR_HPP
#include "Person.hpp"
#include <ctime>

class Instructor : public Person
{
  private:
    double rating;
    int randNum;

  public:
    Instructor();
    Instructor(std::string, int, double);
    ~Instructor();

    virtual void printName();
    virtual void printAge();
    virtual void printNum();
    virtual void doWork();
};

#endif