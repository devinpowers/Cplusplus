/*
 * CheesePizza.h
 *
 *  Created on: July 27th 2021
 *      Author: Devin Powers
 */

#ifndef CHEESEPIZZA_H_
#define CHEESEPIZZA_H_

#include "Pizza.h"

class CheesePizza : public Pizza {
public:
	CheesePizza();
	virtual ~CheesePizza();

protected:
	virtual void AddToppings();
};

#endif /* CHEESEPIZZA_H_ */


