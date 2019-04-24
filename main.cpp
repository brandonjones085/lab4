#include <iostream>
#include "University.hpp"
#include "menu.hpp"

int main()
{

    Building *b = new Building("Adress One", "One", 1000);
    Building *b2 = new Building("Address Two", "Two", 2000);
    Building *b3 = new Building("Address Three", "Three", 3000);

    Person *p = new Student("Finn", 18, 4.0);
    Person *p1 = new Student("Daphne", 15, 3.0);

    University u;
    u.addBuilding(b);
    u.addBuilding(b2);
    u.addBuilding(b3);

    u.addPerson(p);
    u.addPerson(p1);

    std::cout << "Welcome to Oregon State University" << std::endl;
    int menuOption = menu();
    while (menuOption != 4)
    {
        if (menuOption == 1)
        {
            std::cout << "Prints info about buildings\n";
            u.printBuildingInfo();
        }
        else if (menuOption == 2)
        {
            std::cout << "Prints information about people at university";
            u.printPeopleInfo();
        }
        else if (menuOption == 3)
        {
            std::cout << "Choose a person to do work";
        }
        else
        {
            std::cout << "\n\nGoodbye\n\n";
            return 0;
        }
    }
    std::cout << "\n\nGoodbye\n\n";

    return 0;
}