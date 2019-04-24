#include "Person.hpp"
#include <iostream>

Person::Person()
{
    this->personName = " ";
    this->personAge = 0;
}

Person::Person(std::string name, int age)
{
    this->personName = name;
    this->personAge = age;
}

Person::~Person()
{
}

std::string Person::getName()
{
    return personName;
}

int Person::printAge()
{
    return personAge;
}

void Person::printName()
{
    std::cout << "Name: " << personName << std::endl;
}

void Person::doWork() {}