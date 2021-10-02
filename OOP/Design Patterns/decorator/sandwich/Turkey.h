/*
 * Turkey.h
 *
 */

#ifndef TURKEY_H_
#define TURKEY_H_

#include "SubItemsDecorator.h"

class Turkey : public SubItemsDecorator {
public:
	Turkey(Sub * sub);
	virtual ~Turkey();

	virtual std::string GetDescription();
};


Turkey::Turkey(Sub * sub) : SubItemsDecorator(sub) {}

Turkey::~Turkey() {}


std::string Turkey::GetDescription()
{
   return m_pSub->GetDescription() + ", Turkey";
}

#endif /* TURKEY_H_ */
