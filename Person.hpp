#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person
{
  protected:
    std::string personName;
    int personAge;

  public:
    Person();
    Person(std::string, int);
    virtual ~Person();
    virtual void doWork();
    virtual void printName();
    std::string getName();
    int printAge();
};

#endif