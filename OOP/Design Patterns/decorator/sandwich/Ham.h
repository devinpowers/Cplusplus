/*
 * Ham.h

 */

#ifndef HAM_H_
#define HAM_H_

#include "SubItemsDecorator.h"

class Ham : public SubItemsDecorator {
	public:
		Ham(Sub * sub);
		virtual ~Ham();

		virtual double GetCost();
		virtual std::string GetDescription();
};

Ham::Ham(Sub * sub) : SubItemsDecorator(sub) {}

Ham::~Ham() {}

double Ham::GetCost()
{
	return m_pSub->GetCost() + 0.50;
}

std::string Ham::GetDescription()
{
	return m_pSub->GetDescription() + ", Ham";
}

#endif /* HAM_H_ */

