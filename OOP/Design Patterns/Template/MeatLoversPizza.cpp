/*
 * MeatLoversPizza.cpp
 *
 *  Created on: July 27 2021
 *      Author: Devin Powers
 */

#include "MeatLoversPizza.h"

#include <iostream>

MeatLoversPizza::MeatLoversPizza()
: Pizza(std::string("Meat Lover's Pizza")){
}

MeatLoversPizza::~MeatLoversPizza() {
}


void MeatLoversPizza::AddToppings()
{
	std::cout << "adding cheese, pepperoni, sausage and bacon toppings\n";
}



