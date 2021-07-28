/*
 * MushroomsPizza.h
 *
 *  Created on: July 27th 2021
 *      Author: Devin Powers
 */

#ifndef MushroomsPizza_H_
#define MushroomsPizza_H_

#include "Pizza.h"

class MushroomsPizza : public Pizza {
protected:
	virtual void AddToppings();
public:
	MushroomsPizza();
	virtual ~MushroomsPizza();

};

#endif /* MushroomsPizza_H */


