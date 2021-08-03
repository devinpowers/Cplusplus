/*
 * StarWarsCharacter.h
 *
 *
 */

#ifndef STARWARSCHARACTER_H_
#define STARWARSCHARACTER_H_

#include <string>

class WeaponBehavior;

class StarWarsCharacter {
public:
	StarWarsCharacter(std::string name, WeaponBehavior * weaponBehavior);
    virtual ~StarWarsCharacter();

	virtual void Fight();

	virtual void SetWeaponBehavior(WeaponBehavior * weaponBehavior)
	{ m_pWeaponBehavior = weaponBehavior; }
	
protected:
	WeaponBehavior * m_pWeaponBehavior;
	std::string      m_name;

};

#endif /* STARWARSCHARACTER_H_ */


