/*
 * Cheese.h
 */

#ifndef CHEESE_H_
#define CHEESE_H_

#include "SubItemsDecorator.h"

class Cheese : public SubItemsDecorator {
public:
	Cheese(Sub * sub);
	virtual ~Cheese();

	virtual double GetCost();
	virtual std::string GetDescription();
};

Cheese::Cheese(Sub * sub) : SubItemsDecorator(sub) {}

Cheese::~Cheese() {}

double Cheese::GetCost()
{
	return m_pSub->GetCost() + 0.50;
}

std::string Cheese::GetDescription()
{
	return m_pSub->GetDescription() + std::string(", Cheese");
}

#endif /* CHEESE_H_ */


