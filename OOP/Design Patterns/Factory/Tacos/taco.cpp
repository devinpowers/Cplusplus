
#include "taco.h"

#include <iostream>

Taco::Taco() {}

Taco::~Taco(){}

void Taco::Cook()
{
    std::cout << "Cooking the Taco.....done " << std::endl;
}

void Taco::Wrap()
{
    std::cout << "Wrapping your " << GetName() << std::endl;
}
void Taco::Prepare() {
    // Preparing the taco

    std::cout << "Preparing " << t_name << std::endl;
    std::cout << "Adding the " << t_shell <<  " Shell" << std::endl;
    std::cout << "Adding " << t_meat << std::endl;
    std::cout << "Adding Toppings:  " << std::endl;

    std::vector<std::string>::iterator toppingsIter;

    for(toppingsIter = t_toppings.begin(); toppingsIter != t_toppings.end(); toppingsIter++)
    {
        std::string topping = *toppingsIter;
        std::cout << "   " << topping << std::endl; // Print out the topping we just added
    }

}

