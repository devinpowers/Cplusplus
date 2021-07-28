

#ifndef CHICKEN_H
#define CHICKEN_H

#include <string>
#include "Animal.h"

// Declaration of the CChicken class.
 /** Class that describes a chicken.
 */
class CChicken : public CAnimal
{
private:
    //! The chicken's ID
    std::string mId;

public:
    void ObtainChickenInformation();
    void DisplayAnimal();

};

#endif

