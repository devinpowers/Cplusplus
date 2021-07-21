/**
 * This class holds a collection of ducks that make
 * up the duck inventory of the farm.
 */


#pragma once
#include <string>
#include "Animal.h"
#include "Farm.h"

using std::string;

/**
* Class that describes a duck.\
*
* Holds a collection of ducks that make up the cow inventory.
*/
class CDuck : public CAnimal
{
public:
	/// The types of duck we can have on our farm
	enum class Type { Mallard, Wood, Disney, WarnerBrothers };

	void ObtainDuckInformation();
	void DisplayAnimal();

	/** Sets type of animal to check for witch weight. */
	void setType() { CAnimal::setDuckType(int(mType)); }

private:
	/// Duck's name
	string mName;

	/// The type of duck, with default being the Disney duck
	Type mType = Type::Disney;
};

