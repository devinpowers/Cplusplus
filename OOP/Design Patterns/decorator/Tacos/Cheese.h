/*
 * Cheese.h
 */

#ifndef CHEESE_H_
#define CHEESE_H_

#include "TacoItemsDecorator.h"

class Cheese : public TacoItemsDecorator {
	public:
		Cheese(Taco * taco);
		virtual ~Cheese();

		virtual double GetCost();  // Added Cost for Cheese
		virtual std::string GetDescription();
};

Cheese::Cheese(Taco * taco) : TacoItemsDecorator(taco) {}

Cheese::~Cheese() {}

double Cheese::GetCost()
{
	return _taco->GetCost() + 0.50;
}

std::string Cheese::GetDescription()
{
	return _taco->GetDescription() + std::string(", Cheese");
}

#endif /* CHEESE_H_ */


