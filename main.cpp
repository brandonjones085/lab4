/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/24/2019
** Description:  The main file to run the program
*******************************************************************************/

#include <iostream>
#include "University.hpp"
#include "menu.hpp"

int main()
{
    //Creating building objects
    Building *b = new Building("Adress One", "One", 1000);
    Building *b2 = new Building("Address Two", "Two", 2000);
    Building *b3 = new Building("Address Three", "Three", 3000);

    //Creating student objects
    Person *p = new Student("Finn", 18, 4.0);
    Person *p1 = new Student("Daphne", 15, 3.0);

    //Creating instructor objects
    Person *p2 = new Instructor("Casey", 40, 5.0);
    Person *p3 = new Instructor("Brandon", 30, 2.0);

    University u;
    //Adding the buildings to the vector
    u.addBuilding(b);
    u.addBuilding(b2);
    u.addBuilding(b3);

    //Adding the person objects to the vector
    u.addPerson(p);
    u.addPerson(p1);
    u.addPerson(p2);
    u.addPerson(p3);

    std::cout << "Welcome to Oregon State University" << std::endl;

    //Menu returns a 1, 2, or 3
    int menuOption = menu();

    while (menuOption != 4) //4 will exit the program
    {
        //Prints the building information
        if (menuOption == 1)
        {
            std::cout << "Prints info about buildings\n";
            u.printBuildingInfo();
            menuOption = menu();
        }
        //Prints the people information
        else if (menuOption == 2)
        {
            std::cout << "Prints information about people at university";
            u.printPeopleInfo();
            menuOption = menu();
        }
        //PRints the names and asks the user who to do the work
        else if (menuOption == 3)
        {
            std::cout << "Choose a person to do work";
            u.printWork();
            menuOption = menu();
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