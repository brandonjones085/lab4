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
    void setRandNum();
    int getRandNum();
};

#endif
