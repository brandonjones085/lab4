#include <iostream>
#include "University.hpp"
#include "menu.hpp"

int main()
{
    std::cout << "Welcome to Oregon State University" << std::endl;
    int menuOption = menu();
    while (menuOption != 4)
    {
        if (menuOption == 1)
        {
            std::cout << "Prints info about buildings";
        }
        else if (menuOption == 2)
        {
            std::cout << "Prints information about people at university";
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