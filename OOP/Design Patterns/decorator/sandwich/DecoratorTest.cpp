/*
 * DecoratorTest.cpp
 *
 */

#include "SmallSub.h"
#include "LargeSub.h"
#include "Lettuce.h"
#include "Tomato.h"
#include "Bacon.h"
#include "Cheese.h"
#include "Mayo.h"
#include "Turkey.h"
#include "Ham.h"

#include <iostream>

int main()
{
	SmallSub smallSub;
	Turkey   smallTurkey(&smallSub);
	Lettuce  smallLettuce(&smallTurkey);
	Tomato   smallTomato(&smallLettuce);
	Bacon    smallBacon(&smallTomato);
	Cheese   smallCheese(&smallBacon);
	Mayo     smallMayo(&smallCheese);
    Sub * sub1 = &smallMayo;

	std::cout << "Description : " << sub1->GetDescription() << "\n";
	std::cout << "Cost        : " << sub1->GetCost() << "\n\n";

	LargeSub largeSub;
	Ham      largeHam(&largeSub);
	Lettuce  largeLettuce(&largeHam);
	Tomato   largeTomato(&largeLettuce);
	Bacon    largeBacon(&largeTomato);
	Cheese   largeCheese(&largeBacon);
	Mayo     largeMayo(&largeCheese);

	Sub * sub2 = &largeMayo;

	std::cout << "Description : " << sub2->GetDescription() << "\n";
	std::cout << "Cost        : " << sub2->GetCost() << "\n\n";
}

