
// Declaration of the CChicken class.
#pragma once

#include <string>
#include "Animal.h"


 /** Class that describes a chicken.
 */
class CChicken : public CAnimal
{
public:
    void ObtainChickenInformation();
    void DisplayAnimal();

private:
    //! The chicken's ID
    std::string mId;
};

