/*
 * SubItemsDecorator.h
 */

#ifndef SUBITEMSDECORATOR_H_
#define SUBITEMSDECORATOR_H_

#include "Sub.h"

class SubItemsDecorator : public Sub {

	public:
		SubItemsDecorator(Sub * sub);
		virtual ~SubItemsDecorator();

		virtual double GetCost();
		virtual std::string GetDescription();

	protected:
		Sub * m_pSub;
};

SubItemsDecorator::SubItemsDecorator(Sub * sub) : m_pSub(sub){}

SubItemsDecorator::~SubItemsDecorator(){}

double SubItemsDecorator::GetCost(){
	return m_pSub->GetCost();
}

std::string SubItemsDecorator::GetDescription()
{
	return m_pSub->GetDescription();
}

#endif /* SUBITEMSDECORATOR_H_ */


