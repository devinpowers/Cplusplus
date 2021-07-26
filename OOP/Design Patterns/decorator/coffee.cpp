
//coffee implementation class
#include "coffee.h"
 
Espresso::Espresso()
{
    description = "Espresso";
}
 
Espresso::~Espresso()
{
}
 
std::string Espresso::getDescription() const
{
    return description;
}
 
double Espresso::cost()
{
    return 1.99;
}
 
HouseBlend::HouseBlend()
{
    description = "HouseBlend";
}
 
HouseBlend::~HouseBlend()
{
}
 
std::string HouseBlend::getDescription() const
{
    return description;
}
 
double HouseBlend::cost()
{
    return .89;
}

