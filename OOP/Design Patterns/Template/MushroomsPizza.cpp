/*
 * CheesePizza.cpp
 *
 *  Created on: July 27 2021
 *      Author: Devin Powers
 */

#include "MushroomsPizza.h"

#include <iostream>

MushroomsPizza::MushroomsPizza()
: Pizza(std::string("Mushrooms Pizza")) {
}

MushroomsPizza::~MushroomsPizza() {
}

void MushroomsPizza::AddToppings()
{
	std::cout << "adding Mushrooms topping\n";
}



