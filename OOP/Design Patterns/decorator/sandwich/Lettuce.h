/*
 * Lettuce.h
 
 */

#ifndef LETTUCE_H_
#define LETTUCE_H_

#include "SubItemsDecorator.h"

class Lettuce : public SubItemsDecorator {
	public:
		Lettuce(Sub * sub);
		virtual ~Lettuce();

		virtual std::string GetDescription();
};


Lettuce::Lettuce(Sub * sub) : SubItemsDecorator(sub) {}

Lettuce::~Lettuce() {}

std::string Lettuce::GetDescription()
{
	return m_pSub->GetDescription() + std::string(", Lettuce");
}

#endif /* LETTUCE_H_ */


