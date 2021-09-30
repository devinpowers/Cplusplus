/*
 * Stadium.cpp
 *
 */

#include "Stadium.h"
#include "NBAfan.h"

#include <iostream>

Stadium::Stadium() {}

Stadium::~Stadium() {}

void Stadium::EnterStadiumEarly(NBAfan * patron)
{
	std::cout << "Welcome, " << patron->GetName() << ", to our early access stadium hours\n";
}

void Stadium::AttendFloor(NBAfan * patron)
{
	std::cout << "Welcome, " << patron->GetName() << ", to the floor seats\n";
}


