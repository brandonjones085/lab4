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
    void setRandNum();
    int getRandNum();
    virtual void printName();
    virtual void doWork();
};

#endif