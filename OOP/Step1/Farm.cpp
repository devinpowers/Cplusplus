
#include <typeinfo>
#include <iostream>
#include <string>
#include "Farm.h"
// #include "leak.h"

using namespace std;


 /**
  * CFarm destructor
  */
CFarm::~CFarm()
{
    // Iterate over all of the animals, destroying 
    // each one.
    for (auto animal : mInventory)
    {
        delete animal;
    }

    // And clear the list
    mInventory.clear();

    // Reset the witch weight count to 0
    mWitchWeight = 0;
}

 /** Add an animal to the farm inventory.
  * 
  * Also increments count of witch weight animals.
  *
  * \param animal: An animal to add to the inventory
  */
void CFarm::AddAnimal(CAnimal* animal)
{
    mInventory.push_back(animal);

    if (animal->getDuckType() != 2)
    {
        IsWitchWeight(animal);
    }
}

/**
 * Display the farm inventory.
 */
void CFarm::DisplayInventory()
{
    for (auto animal : mInventory)
    {
        animal->DisplayAnimal();
    }
}


/**
 * Increments the number of witch weight animals.
 */
void CFarm::IsWitchWeight(CAnimal* animal)
{
    ++mWitchWeight;
}


/**
 * Displays the number of witch weight animals.
 */
void CFarm::DisplayWitchWeight()
{
    cout << "There are " << mWitchWeight << " witch-weight animals." << endl;
}




