/* 
 * File:   main.cpp
 * Author: Devin Powers
 * This project should involve function overloading, inheritance, and polymorphism!
 */

#include <cstdlib>
#include <vector>
#include <iostream>
#include "drink.h"
#include "barista.h"
#include <unistd.h>
using namespace std;

int main() {
    vector<OrangeJuice*> OJOrders;
    
    OJOrders.push_back(new OrangeJuice("Tommy", 3, false));
    OJOrders.push_back(new OrangeJuice("Bob", 2, true));
    OJOrders.push_back(new OrangeJuice("Devin", 2, true));
    OJOrders.push_back(new OrangeJuice("Aaron", 1, true));
    OJOrders.push_back(new OrangeJuice("Austin", 3, true));

    vector<BubbleTea*> BTOrders;


    BTOrders.push_back(new BubbleTea("Tommy", 2, true, 3));
    BTOrders.push_back(new BubbleTea("Tony", 3, true, 1));
    BTOrders.push_back(new BubbleTea("Nick", 3, true, 3));
    BTOrders.push_back(new BubbleTea("Billy", 1, true, 2));
    BTOrders.push_back(new BubbleTea("Clay", 1, true, 2));
    BTOrders.push_back(new BubbleTea("Lindsay", 2, true, 3));
    BTOrders.push_back(new BubbleTea("Isiah", 2, true, 1));

    OrangeJuiceOrderList OjOrderList = OrangeJuiceOrderList(OJOrders);
    
    BubbleTeaList BtOrderList = BubbleTeaList(BTOrders);
    
    Barista* AwesomeArnold = new CoolBarista();

    Barista* ClumsyCharles = new NewbieBarista();
    
    
    AwesomeArnold->deliverDrinks(&OjOrderList);
    ClumsyCharles->deliverDrinks(&OjOrderList);
    
    AwesomeArnold->deliverDrinks(&BtOrderList);
    ClumsyCharles->deliverDrinks(&BtOrderList);
    
    //cleans up memory 



    for (unsigned int i=0; i<OJOrders.size(); i++) {
        delete OJOrders[i];
    }
    for (unsigned int i=0; i<BTOrders.size(); i++) {
        delete BTOrders[i];
    }
    
    delete AwesomeArnold;
    delete ClumsyCharles;

}


