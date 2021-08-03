
#ifndef KNIFE_H_
#define KNIFE_H_

#include "WeaponBehavior.h"

class Knife: public WeaponBehavior {
public:
	Knife();
	virtual ~Knife();

	virtual void useWeapon();
};

#endif




