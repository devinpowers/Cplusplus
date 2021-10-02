/*
 * SmallSub.h
 *
 *  */

#ifndef SMALLSUB_H_
#define SMALLSUB_H_

#include "Sub.h"

class SmallSub : public Sub {
	public:
		SmallSub();
		virtual ~SmallSub();

		virtual double GetCost();
		virtual std::string GetDescription();
};

SmallSub::SmallSub() {}

SmallSub::~SmallSub() {}

double SmallSub::GetCost()
{
	return 5.99;
}

std::string SmallSub::GetDescription()
{
   return std::string("Small Sub");
}

#endif /* SMALLSUB_H_ */


