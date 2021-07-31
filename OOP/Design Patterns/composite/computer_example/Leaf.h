#ifndef COMPUTER_LEAF_H
#define COMPUTER_LEAF_H

#include "Component.h"
#include <iostream>
#include <string>

using namespace std;

class Leaf : virtual public Component {

    public:
        Leaf(const string &name, double price);
        void ShowDetails() override;
        void GetPrice() override;

    private:
        string name;
        double price;

};


#endif