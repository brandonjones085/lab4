#ifndef INSTRUCTOR_HPP
#define INSTRUCTOR_HPP
#include "Person.hpp"

class Instructor : public Person
{
  private:
    double rating;

  public:
    virtual void doWork();
};

#endif