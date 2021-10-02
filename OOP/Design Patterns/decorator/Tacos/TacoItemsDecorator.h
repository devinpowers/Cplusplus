/*
 * TacoItemsDecorator.h
 */

#ifndef TACOITEMSDECORATOR_H_
#define TACOITEMSDECORATOR_H_

#include "Taco.h"

class TacoItemsDecorator : public Taco {

	protected:
		Taco * _taco;

	public:
		TacoItemsDecorator(Taco * taco);
		virtual ~TacoItemsDecorator();

		virtual double GetCost();
		virtual std::string GetDescription();

};

TacoItemsDecorator::TacoItemsDecorator(Taco * taco) : _taco(taco){}

TacoItemsDecorator::~TacoItemsDecorator(){}

double TacoItemsDecorator::GetCost(){
	return _taco->GetCost();
}

std::string TacoItemsDecorator::GetDescription()
{
	return _taco->GetDescription();
}

#endif /* TACOITEMSDECORATOR_H_ */


