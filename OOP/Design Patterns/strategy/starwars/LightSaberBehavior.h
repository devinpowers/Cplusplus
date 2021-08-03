/*
 * LightSaber.h
 *
 */

#ifndef LIGHTSABER_H_
#define LIGHTSABER_H_

#include "WeaponBehavior.h"

class LightSaberBehavior: public WeaponBehavior {
public:
	LightSaberBehavior();
	virtual ~LightSaberBehavior();

	virtual void useWeapon();
};

#endif /* LIGHTSABER_H_ */




