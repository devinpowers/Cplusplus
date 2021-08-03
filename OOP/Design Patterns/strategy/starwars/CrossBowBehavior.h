/*
 * CrossBowBehavior.h
 *
 *  
 */

#ifndef CROSSBOWBEHAVIOR_H_
#define CROSSBOWBEHAVIOR_H_

#include "WeaponBehavior.h"

class CrossBowBehavior: public WeaponBehavior {
public:
	CrossBowBehavior();
	virtual ~CrossBowBehavior();

	virtual void useWeapon();
};

#endif /* CROSSBOWBEHAVIOR_H_ */


