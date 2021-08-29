/*
 * VPet.h
 *
 *  Created on: Jun 4, 2012
 *      Author: Derek
 */
 
#ifndef VPET_H_
#define VPET_H_
 
#include <iostream>
 
class VPet
{
    public:
 
        friend std::ostream& operator<<(std::ostream& os, const VPet& vp);
 
        // Constructors (Member function)
        VPet(double, bool);
        VPet();
 
        // Member functions
        void feedPet(int amount);
        bool getHungry() const;
        double getWeight() const;
 
    private:
 
        // Data Members
        double weight;
        bool hungry;
};
 
#endif /* VPET_H_ */