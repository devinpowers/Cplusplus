/*
 * Steak.h
 *
 */

#ifndef STEAK_H_
#define STEAK_H_

#include "TacoItemsDecorator.h"

class Steak : public TacoItemsDecorator {
	public:
		Steak(Taco * taco);
		virtual ~Steak();

		virtual std::string GetDescription();
};


Steak::Steak(Taco * taco) : TacoItemsDecorator(taco) {}

Steak::~Steak() {}


std::string Steak::GetDescription()
{
   return _taco->GetDescription() + ", Steak";
}

#endif /* STEAK_H_ */
