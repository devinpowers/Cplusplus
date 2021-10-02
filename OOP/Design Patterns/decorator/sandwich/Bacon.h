/*
 * Bacon.h
 *
 */

#ifndef BACON_H_
#define BACON_H_

#include "SubItemsDecorator.h"

class Bacon : public SubItemsDecorator {
	public:
		Bacon(Sub * sub);
		virtual ~Bacon();

		virtual double GetCost();
		virtual std::string GetDescription();
};

Bacon::Bacon(Sub * sub): SubItemsDecorator(sub) {}

Bacon::~Bacon() {}

double Bacon::GetCost()
{
	return m_pSub->GetCost() + 1.00;
}

std::string Bacon::GetDescription()
{
	return m_pSub->GetDescription() + std::string(", Bacon");
}

#endif /* BACON_H_ */

