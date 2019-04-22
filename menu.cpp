#include "menu.hpp"
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

    return choice;
}