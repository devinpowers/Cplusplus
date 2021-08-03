
#include <string>

#include "AxeBehavior.h"
#include "GunBehavior.h"
#include "Knife.h"

#include "Character.h"

int main()
{
	WeaponBehavior * axeBehavior    = new AxeBehavior();
	WeaponBehavior * gunBehavior	= new GunBehavior();
	WeaponBehavior * knifeBehavior = new Knife();

	Character * Aaron       = new Character(std::string("Aaron Shreck"), axeBehavior);
	Character * Austin 		= new Character(std::string("Austin Harms"), gunBehavior);
	Character * Chris       = new Character(std::string("Chris Hanke"),axeBehavior);
	Character * Devin       = new Character(std::string("Devin Powers"), knifeBehavior);
	
	Devin->SetWeaponBehavior(knifeBehavior);
	Devin->Fight();

	Aaron->SetWeaponBehavior(axeBehavior);
	Austin->SetWeaponBehavior(gunBehavior);
	Chris->SetWeaponBehavior(axeBehavior);

	Aaron->Fight();
	Austin->Fight();
	Chris->Fight();
	
	// Can Chnage Weapon Behavior Easily

	Aaron->SetWeaponBehavior(gunBehavior);
	Austin->SetWeaponBehavior(knifeBehavior);
	Chris->SetWeaponBehavior(knifeBehavior);
	Devin->SetWeaponBehavior(axeBehavior);

	Aaron->Fight();
	Austin->Fight();
	Chris->Fight();
	Devin->Fight();

	delete Aaron;
    delete Austin;
    delete Chris;
	delete Devin;

    delete axeBehavior;
    delete gunBehavior;
    delete knifeBehavior;
	
}


