/*
 * Stadium.h
 *
 */


#ifndef STADIUM_H_
#define STADIUM_H_

#include "NBAfan.h"

#include <iostream>


class NBAfan;

class Stadium {
	public:
		Stadium();
		virtual ~Stadium();

		virtual void EnterStadiumEarly(NBAfan * patron);
		virtual void AttendFloor(NBAfan * patron);
};

Stadium::Stadium() {} // constructor

Stadium::~Stadium() {}   // deconstructor

// members normally
void Stadium::EnterStadiumEarly(NBAfan * patron)
{
	std::cout << "Welcome, " << patron->GetName() << ", to our early access stadium hours\n";
}

void Stadium::AttendFloor(NBAfan * patron)
{
	std::cout << "Welcome, " << patron->GetName() << ", to the floor seats\n";
}

#endif /* STADIUM_H_ */

