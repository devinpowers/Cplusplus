/*
 * GunBehavior.h
 * Created: Devin Powers
 *  
 */

#ifndef GUNBEHAVIOR_H_
#define GUNBEHAVIOR_H_

#include "WeaponBehavior.h"

class GunBehavior: public WeaponBehavior {
public:
	GunBehavior();
	virtual ~GunBehavior();

	virtual void useWeapon();
};

#endif /* GUNBEHAVIOR_H_ */


