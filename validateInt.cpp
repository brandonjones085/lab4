#include "validateInt.hpp"
#include <iostream>
/******************************************************************************* 
** Description:  The function takes a reference to an int and validates 
that it is a valid input. 
*******************************************************************************/

void validateInt(int &i)
{
    while (!std::cin || (i < 1 && i > 4))
    {
        std::cin.clear();
        std::cin.sync();
        std::cout << "\nInvalid input! Try again: ";
        std::cin >> i;
    }
}