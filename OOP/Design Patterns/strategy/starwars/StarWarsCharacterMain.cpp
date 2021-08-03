
#include <string>

#include "BlasterBehavior.h"
#include "CrossBowBehavior.h"
#include "LightSaberBehavior.h"
#include "Knife.h"

#include "StarWarsCharacter.h"

int main()
{
	WeaponBehavior * blasterBehavior    = new BlasterBehavior();
	WeaponBehavior * lightSaberBehavior = new LightSaberBehavior();
	WeaponBehavior * crossBowBehavior   = new CrossBowBehavior();

	// Lets add Knife Behavior
	WeaponBehavior * knifeBehavior = new Knife();

	StarWarsCharacter * hanSolo       = new StarWarsCharacter(std::string("Han Solo"), blasterBehavior);
	StarWarsCharacter * lukeSkywalker = new StarWarsCharacter(std::string("Luke Skywalker"), lightSaberBehavior);
	StarWarsCharacter * chewy         = new StarWarsCharacter(std::string("Chewy"), crossBowBehavior);

	// Add Another Characrer

	StarWarsCharacter * Devin       = new StarWarsCharacter(std::string("Devin Powers"), knifeBehavior);
	
	Devin->SetWeaponBehavior(knifeBehavior);
	Devin->Fight();



	hanSolo->SetWeaponBehavior(blasterBehavior);
	lukeSkywalker->SetWeaponBehavior(lightSaberBehavior);
	chewy->SetWeaponBehavior(crossBowBehavior);

	hanSolo->Fight();
    lukeSkywalker->Fight();
    chewy->Fight();

	// Can Chnage Weapon Behavior Easily

	hanSolo->SetWeaponBehavior(lightSaberBehavior);
	lukeSkywalker->SetWeaponBehavior(crossBowBehavior);
	chewy->SetWeaponBehavior(knifeBehavior);
	Devin->SetWeaponBehavior(lightSaberBehavior);

	hanSolo->Fight();
    lukeSkywalker->Fight();
    chewy->Fight();
	Devin->Fight();

	delete hanSolo;
    delete lukeSkywalker;
    delete chewy;

    delete blasterBehavior;
    delete lightSaberBehavior;
    delete crossBowBehavior;

	delete knifeBehavior;
	delete Devin;
}


