/*
 * LargeSub.h
 *
 *  
 */

#ifndef LARGESUB_H_
#define LARGESUB_H_

#include "Sub.h"

class LargeSub : public Sub {
public:
	LargeSub();
	virtual ~LargeSub();

	virtual double GetCost();
	virtual std::string GetDescription();

};

LargeSub::LargeSub() {}

LargeSub::~LargeSub() {}

double LargeSub::GetCost()
{
	return 8.99;
}

std::string LargeSub::GetDescription()
{
   return std::string("Large Sub");
}
#endif /* LARGESUB_H_ */


