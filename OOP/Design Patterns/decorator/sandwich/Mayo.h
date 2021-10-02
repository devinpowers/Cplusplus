/*
 * Mayo.h
 *
 */

#ifndef MAYO_H_
#define MAYO_H_

#include "SubItemsDecorator.h"

class Mayo : public SubItemsDecorator {
public:
	Mayo(Sub * sub);
	virtual ~Mayo();

	virtual std::string GetDescription();
};

Mayo::Mayo(Sub * sub) : SubItemsDecorator(sub) {}

Mayo::~Mayo() {}

std::string Mayo::GetDescription()
{
	return m_pSub->GetDescription() + std::string(", Mayo");
}

#endif /* MAYO_H_ */


