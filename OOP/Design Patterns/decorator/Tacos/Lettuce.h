/*
 * Lettuce.h
 
 */

#ifndef LETTUCE_H_
#define LETTUCE_H_

#include "TacoItemsDecorator.h"

class Lettuce : public TacoItemsDecorator {
	public:
		Lettuce(Taco * taco);
		virtual ~Lettuce();

		virtual std::string GetDescription();
};


Lettuce::Lettuce(Taco * taco) : TacoItemsDecorator(taco) {}

Lettuce::~Lettuce() {}

std::string Lettuce::GetDescription()
{
	return _taco->GetDescription() + std::string(", Lettuce");
}

#endif /* LETTUCE_H_ */


