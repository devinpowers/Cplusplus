/*
 * VPetApp.cpp
 *
 *  Created on: Jun 4, 2012
 *      Author: Derek
 */
 
#include "VPet.h"
using namespace std;
 
int main()
{
    VPet bob(150, false);
    bob.feedPet(25);
 
    VPet sam;
    sam.feedPet(10);
 
    cout << "Bob weighs: " << bob.getWeight() << endl;
    cout << "Sam weighs: " << sam.getWeight() << endl;
 
    cout << bob << endl;
    cout << sam << endl;
 
    return 0;
}