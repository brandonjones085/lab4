/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/24/2019
** Description:  The header file for the Person class
*******************************************************************************/

#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person
{
  protected:
    std::string personName;
    int personAge;
    int randNum;

  public:
    Person();
    Person(std::string, int);
    //virtual ~Person();
    virtual void doWork();
    virtual void printName();
    virtual void printAge();
    virtual void printNum();
    int getRandNum();
    std::string getName();
    int getAge();
};

#endif