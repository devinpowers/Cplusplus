/*
 * Character.cpp
 */


#include "Character.h"
#include "WeaponBehavior.h"

#include <string>
#include <iostream>

Character::Character(std::string name, WeaponBehavior * weaponBehavior) : m_pWeaponBehavior(weaponBehavior), m_name(name){}

Character::~Character() {};

void Character::Fight()
{
	std::cout << m_name << ": ";
	m_pWeaponBehavior->useWeapon();
}


