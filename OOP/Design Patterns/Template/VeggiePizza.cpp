/*
 *  VeggiePizza.cpp
 *
 *  Created on: July 27 2021
 *      Author: Devin Powers
 */

#include "VeggiePizza.h"

#include <iostream>

VeggiePizza::VeggiePizza()
: Pizza(std::string("Veggie Pizza")) {
}

VeggiePizza::~VeggiePizza() {
}

void VeggiePizza::AddToppings()
{
	std::cout << "adding veggie topping\n";
}




