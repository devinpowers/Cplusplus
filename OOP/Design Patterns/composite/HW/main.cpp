/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 

 */

#include <cstdlib>
#include "Bundle.h"
#include "Item.h"
#include "Phone.h"
#include "Laptop.h"

using namespace std;

/*
 * 
 */
    
int main(int argc, char** argv) {
    Bundle* b1=new Bundle("b1", 0.9);
    b1->addItem(new Phone("iPhone 7", 1200, 2016));
    b1->addItem(new Laptop("MacBook", 2800, "2.1GHZ"));
    Bundle* b2=new Bundle("b2",0.8);
    b2->addItem(new Phone("iPhone 6", 800, 2015));
    b2->addItem(new Phone("iPhone 5", 500, 2015));
    b2->addItem(new Phone("iPhone 4", 400, 2015));
    Bundle* b3=new Bundle("b3", 1.0);
    b3->addItem(b1);
    b3->addItem(b2);
    b3->print();
    return 0;
}
