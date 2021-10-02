/*
 * Tomato.h
 *
 */

#ifndef TOMATO_H_
#define TOMATO_H_

#include "SubItemsDecorator.h"

class Tomato : public SubItemsDecorator {
public:
	Tomato(Sub * sub);
	virtual ~Tomato();

	virtual std::string GetDescription();
};

Tomato::Tomato(Sub * sub) : SubItemsDecorator(sub) {}

Tomato::~Tomato() {}

std::string Tomato::GetDescription()
{
	return m_pSub->GetDescription() + std::string(", Tomato");
}

#endif /* TOMATO_H_ */
