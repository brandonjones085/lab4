/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/24/2019
** Description:  The menu function asks a user a choice and returns an int. 
The int returned determines how the program will run.
*******************************************************************************/

#include "menu.hpp"
#include "validateInt.hpp"
#include <iostream>

int menu()
{
    int choice;
    std::cout << "\n\nEnter 1 for building information " << std::endl;
    std::cout << "Enter 2 for information on everybody at the university " << std::endl;
    std::cout << "Enter 3 to choose a person to do work " << std::endl;
    std::cout << "Enter 4 to exit the program " << std::endl;
    std::cout << std::endl;
    std::cin >> choice;

    //makes sure the number is between 1 and 4
    validateInt(choice);

    return choice;
}