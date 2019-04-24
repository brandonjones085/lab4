#include "Student.hpp"
#include <iostream>

Student::Student()
{
    this->personName = " ";
    this->personAge = 0;
    this->GPA = 0;
    srand(time(NULL));
}

Student::Student(std::string name, int age, double gpa)
    : Person(name, age)
{
    this->personName = name;
    this->personAge = age;
    this->GPA = gpa;
    srand(time(NULL));
}

void Student::doWork()
{
    std::cout << getName() << " did " << getRandNum() << std::endl;
}

void Student::setRandNum()
{
    randNum = std::rand() % 40 + 1;
}

int Student::getRandNum()
{
    return randNum;
}

void Student::printName()
{
    std::cout << "Name: " << personName << "from the student class" << std::endl;
}
