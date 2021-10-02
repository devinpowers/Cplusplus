/*
 * DecoratorTest.cpp
 *
 */

#include "SmallTaco.h"
#include "LargeTaco.h"
#include "Lettuce.h"
#include "Steak.h"
#include "Salsa.h"
#include "Cheese.h"
#include "Guac.h"
#include "Chicken.h"

#include <iostream>

int main()
{
	SmallTaco smallTaco;
	Chicken smallChicken(&smallTaco);
	Lettuce smallLettuce(&smallChicken);

	Steak smallSteak(&smallLettuce);
	Salsa smallSalsa(&smallSteak);
	Cheese smallCheese(&smallSteak);
	Guac smallGuac(&smallCheese);

	Taco * taco = &smallGuac;

	std::cout << "Description : " << taco->GetDescription() << "\n";
	std::cout << "Cost        : " << taco->GetCost() << "\n\n";


	LargeTaco largeTaco;
	Chicken largeChicken(&largeTaco);
	Lettuce largeLettuce(&largeChicken);

	Steak largeSteak(&largeLettuce);
	Salsa largeSalsa(&largeSteak);
	Cheese largeCheese(&largeSalsa);
	Guac largeGuac(&largeCheese);

	Taco * large_taco = &largeGuac;

	std::cout << "Description : " << large_taco->GetDescription() << "\n";
	std::cout << "Cost        : " << large_taco->GetCost() << "\n\n";
}

