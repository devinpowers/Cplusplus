/*
 * Tomato.h
 *
 */

#ifndef CHICKEN_H_
#define CHICKEN_H_

#include "TacoItemsDecorator.h"

class Chicken : public TacoItemsDecorator {
	public:
		Chicken(Taco * taco);
		virtual ~Chicken();

		virtual std::string GetDescription();
};

Chicken::Chicken(Taco * taco) : TacoItemsDecorator(taco) {}

Chicken::~Chicken() {}

std::string Chicken::GetDescription()
{
	return _taco->GetDescription() + std::string(", Chicken");
}

#endif /* CHICKEN_H_ */
