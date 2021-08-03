/*
 * StarWarsCharacter.cpp
 */

#include "StarWarsCharacter.h"

#include "WeaponBehavior.h"

#include <string>
#include <iostream>

StarWarsCharacter::StarWarsCharacter(std::string name, WeaponBehavior * weaponBehavior) : m_pWeaponBehavior(weaponBehavior), m_name(name){}

StarWarsCharacter::~StarWarsCharacter() {}

void StarWarsCharacter::Fight()
{
	std::cout << m_name << ": ";
	m_pWeaponBehavior->useWeapon();
}


