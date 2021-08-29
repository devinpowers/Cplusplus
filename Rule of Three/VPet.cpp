/*
 * Vpet.cpp
 *
 *  Created on: Jun 4, 2012
 *      Author: Derek
 */
 
#include "VPet.h"
 
VPet::VPet(double w, bool hun) :
        weight(w), hungry(hun)
{
}
 
VPet::VPet() :
        weight(100), hungry(true)
{
}
 
void VPet::feedPet(int amt)
{
    if (amt >= weight * 0.5)
    {
        hungry = false;
    }
    else
    {
        hungry = true;
    }
 
    weight = weight + 0.25 * amt;
}
 
double VPet::getWeight() const
{
    return weight;
}
 
bool VPet::getHungry() const
{
    return hungry;
}
 
 
std::ostream& operator<<(std::ostream& os, const VPet& vp)
{
    std::string hungerStatus = "";
 
    if(vp.hungry)
    {
        hungerStatus = "hungry";
    }
    else
    {
        hungerStatus = "not hungry";
    }
 
    return os << "weight: " << vp.weight << " hunger status: "
            << hungerStatus << std::endl;
 
}