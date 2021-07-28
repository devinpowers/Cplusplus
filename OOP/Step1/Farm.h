/**

 * This class holds a collection of animals that make
 * up the inventory of a farm.
 */


#ifndef FARM_H
#define FARM_H
#include <vector>
#include <string>
#include "Cow.h"
#include "Duck.h"

using std::string;


 /**
  * Class that describes a farm.
  *
  * Holds a collection of animals that make up the farm
  * inventory.
  */
class CFarm
{
public:
    ~CFarm();
    void AddAnimal(CAnimal* animal);
    void DisplayInventory();

    void IsWitchWeight(CAnimal* animal);
    void DisplayWitchWeight();

private:
    /// A list with the inventory of all animals on the farm
    std::vector<CAnimal*> mInventory;

    /// Duck's type
    string mDuckTypeName;

    /// Counter for witch weight animals in the farm
    int mWitchWeight = 0;
};
#endif

