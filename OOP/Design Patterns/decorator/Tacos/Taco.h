/*
 * Taco.h
 * Data:
 * Author: Devin
 */

#ifndef TACO_H_
#define TACO_H_

#include <string>

class Taco
{
	public:
		virtual ~Taco() {}
		virtual double GetCost() = 0;
		virtual std::string GetDescription() = 0;

};

#endif /* TACO_H_ */


