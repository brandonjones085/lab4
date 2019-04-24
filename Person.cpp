#include "Person.hpp"
#include <iostream>

Person::Person()
{
    this->personName = " ";
    this->personAge = 0;
};
Person::Person(std::string name, int age)
{
    this->personName = name;
    this->personAge = age;
};

//virtual void doWork();
void Person::printName()
{
    std::cout << "Person name: " << personName << std::endl;
};
void Person::printAge()
{
    std::cout << "Person age: " << personAge << std::endl;
};