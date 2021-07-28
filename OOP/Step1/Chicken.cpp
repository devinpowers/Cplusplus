
#include <iostream>
#include "Chicken.h"


/** Obtain a chicken description from the user.
*/
void CChicken::ObtainChickenInformation()
{
    std::cout << endl;
    std::cout << "Input information about the chicken" << std::endl;

    // Obtain the ID. This is easy, since it's just a
    // string.
    std::cout << "Id: ";
    std::cin >> mId;
}

/** Display the chicken.
*/
void CChicken::DisplayAnimal()
{
    std::cout << "Chicken: " << mId << std::endl;
}


