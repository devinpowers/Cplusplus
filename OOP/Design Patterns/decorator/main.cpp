
#include <iostream>
 
#include "beverage.h"
#include "coffee.h"
#include "condimentdecorator.h"
 
using namespace std;
int main()
{
    Beverage* beverage = new Espresso(); 
    Beverage* beverage2 = new HouseBlend();
    cout << beverage->getDescription() << " and cost = " 
         << beverage->cost() << endl;
 
    cout << beverage2->getDescription() << " and cost = "
             << beverage2->cost() << endl;
    
         //Add Mocha for HouseBlend coffee
    beverage2 = new Mocha(beverage2);
    cout << beverage2->getDescription() << " and cost = "
             << beverage2->cost() << endl;
    
         //Add milk to HouseBlend coffee with mocha
    beverage2 = new Milk(beverage2);
    cout << beverage2->getDescription() << " and cost = "
             << beverage2->cost() << endl;
 
    delete beverage;
    delete beverage2;
    return 0;
}