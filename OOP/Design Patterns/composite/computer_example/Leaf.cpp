

#include "Leaf.h"

Leaf::Leaf(const string &name, double price) :  name(name), price(price) {}

void Leaf::ShowDetails()
{
    cout << name << "price: " << price << "." << endl;

}

double Leaf::GetPrice(){
    return price;
}