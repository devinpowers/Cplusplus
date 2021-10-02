/*
 * SmallTaco.h
 *
 *  */

#ifndef SMALL_TACO_H
#define SMALL_TACO_H

#include "Taco.h"

class SmallTaco : public Taco {
	public:
		SmallTaco();
		virtual ~SmallTaco();
		virtual double GetCost();
		virtual std::string GetDescription();
};

SmallTaco::SmallTaco() {}

SmallTaco::~SmallTaco() {}

double SmallTaco::GetCost()
{
	return 5.99;
}

std::string SmallTaco::GetDescription()
{
   return std::string("Small Taco");
}

#endif /* SMALL_TACO_H */


