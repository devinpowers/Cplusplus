/*
 * Salsa.h
 *
 */

#ifndef SALSA_H_
#define SALSA_H_

#include "TacoItemsDecorator.h"

class Salsa : public TacoItemsDecorator {
	public:
		Salsa(Taco * taco);
		virtual ~Salsa();

		virtual std::string GetDescription();
};

Salsa::Salsa(Taco * taco) : TacoItemsDecorator(taco) {}

Salsa::~Salsa() {}

std::string Salsa::GetDescription()
{
	return _taco->GetDescription() + std::string(", Salsa");
}

#endif /* SALSA_H_ */


