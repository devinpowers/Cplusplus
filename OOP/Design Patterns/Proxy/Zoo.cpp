/*
 * Zoo.cpp
 *
 */

#include "Zoo.h"
#include "ZooPatron.h"

#include <iostream>

Zoo::Zoo() {}

Zoo::~Zoo() {}

void Zoo::EnterZooEarly(ZooPatron * patron)
{
	std::cout << "Welcome, " << patron->GetName() << ", to our early access zoo hours\n";
}

void Zoo::AttendAnimalShow(ZooPatron * patron)
{
	std::cout << "Welcome, " << patron->GetName() << ", to our animal show\n";
}
