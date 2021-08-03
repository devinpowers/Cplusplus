/*
 * CrossBowBehavior.h
 *AxeBehavior
 *  
 */

#ifndef AXEBEHAVIOR_H_
#define AXEBEHAVIOR_H_

#include "WeaponBehavior.h"


class AxeBehavior: public WeaponBehavior {
public:
	AxeBehavior();
	virtual ~AxeBehavior();

	virtual void useWeapon();
};

#endif




