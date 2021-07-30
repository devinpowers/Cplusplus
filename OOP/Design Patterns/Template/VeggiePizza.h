/*
 * VeggiePizza.h
 *
 *  Created on: July 27th 2021
 *      Author: Devin Powers
 */

#ifndef VEGGIEPIZZA_H_
#define VEGGIEPIZZA_H_

#include "Pizza.h"

class VeggiePizza : public Pizza {
public:
	VeggiePizza();
	virtual ~VeggiePizza();

protected:
	virtual void AddToppings();
};

#endif


