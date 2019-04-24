#include "Instructor.hpp"
#include <iostream>

Instructor::Instructor()
{
    this->personName = " ";
    this->personAge = 0;
    this->rating = 0;
    srand(time(NULL));
}

Instructor::Instructor(std::string name, int age, double gpa)
    : Person(name, age)
{
    this->personName = name;
    this->personAge = age;
    this->rating = gpa;
    srand(time(NULL));
}

void Instructor::doWork()
{
    std::cout << getName() << " did " << getRandNum() << std::endl;
}

void Instructor::setRandNum()
{
    randNum = std::rand() % 40 + 1;
}

int Instructor::getRandNum()
{
    return randNum;
}

void Instructor::printName()
{
    std::cout << "Name: " << personName << " From instructor class" << std::endl;
}