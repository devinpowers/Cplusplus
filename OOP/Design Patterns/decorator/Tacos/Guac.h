/*
 * Guac.h
 *
 */

#ifndef GUAC_H_
#define GUAC_H_

#include "TacoItemsDecorator.h"

class Guac : public TacoItemsDecorator {
	public:
		Guac(Taco * taco);
		virtual ~Guac();

		virtual double GetCost();
		
		virtual std::string GetDescription();
};

Guac::Guac(Taco * taco): TacoItemsDecorator(taco) {}

Guac::~Guac() {}

double Guac::GetCost()
{
	return _taco->GetCost() + 2.00; // Guac is Expensive 
}

std::string Guac::GetDescription()
{
	return _taco->GetDescription() + std::string(", Guac");
}

#endif /* GUAC_H_ */

