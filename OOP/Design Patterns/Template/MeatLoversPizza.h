/*
 * MeatLoversPizza.h
 *
 *  Created on: July 27 2021
 *      Author: Devin Powers
 */

#ifndef MEATLOVERSPIZZA_H_
#define MEATLOVERSPIZZA_H_

#include "Pizza.h"

class MeatLoversPizza : public Pizza {
public:
	MeatLoversPizza();
	virtual ~MeatLoversPizza();

protected:
	virtual void AddToppings();
};

#endif /* MEATLOVERSPIZZA_H_ */

