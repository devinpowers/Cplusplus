/*
 * LargeTaco.h
 *
 *  
 */

#ifndef LARGE_TACO_H
#define LARGE_TACO_H

#include "Taco.h"

class LargeTaco : public Taco {
public:
	LargeTaco();
	virtual ~LargeTaco();

	virtual double GetCost();
	virtual std::string GetDescription();

};

LargeTaco::LargeTaco() {}

LargeTaco::~LargeTaco() {}

double LargeTaco::GetCost()
{
	return 8.99;
}

std::string LargeTaco::GetDescription()
{
   return std::string("Large Taco");
}
#endif /* LARGE_TACO_H */


