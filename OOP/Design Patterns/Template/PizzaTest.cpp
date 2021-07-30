/*
 * PizzaTest.cpp
 *
 *
 *  Created on: July 27 2021
 *      Author: Devin Powers
 */


#include "CheesePizza.h"
#include "MeatLoversPizza.h"
#include "VeggiePizza.h"
#include "MushroomsPizza.h"


int main()
{
	CheesePizza cheesePizza;

	cheesePizza.Prepare();

	MeatLoversPizza meatLoversPizza;

	meatLoversPizza.Prepare();

	MushroomsPizza shroomsPizza;

	shroomsPizza.Prepare();

	VeggiePizza veggiePizza;

	veggiePizza.Prepare();

	return 0;
}




