

#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <string>

class WeaponBehavior;

class Character {
public:
	Character(std::string name, WeaponBehavior * weaponBehavior);
    virtual ~Character();

	virtual void Fight();

	virtual void SetWeaponBehavior(WeaponBehavior * weaponBehavior)
	{ 
		m_pWeaponBehavior = weaponBehavior; 
		
	}
	
protected:
	WeaponBehavior * m_pWeaponBehavior;
	std::string      m_name;

};

#endif 


