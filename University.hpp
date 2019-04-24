#ifndef UNIVERSITY_HPP
#define UNIVERSITY_HPP

#include <string>
#include <vector>
#include "Building.hpp"
#include "Person.hpp"
#include "Student.hpp"
#include "Instructor.hpp"

//one student, one instructor, 2 buildings

class University
{
  private:
    std::string name;
    int buildings;
    int people;
    std::vector<Building *> buildingVector;
    std::vector<Person *> personVector;

  public:
    University();
    University(int, int);
    void printBuildingInfo();
    void printPeopleInfo();
    void addBuilding(Building *b);
    void addPerson(Person *p);
};

#endif