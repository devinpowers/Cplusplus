/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 

 */

#ifndef BUNDLE_H
#define BUNDLE_H

#include "Item.h"

#include <vector>
#include <iostream>
#include <algorithm>

using std::vector;
using std::cout;
using std::endl;

class Bundle: public Item{
protected:
    vector<Item*> m_items;
    double m_discount_rate;
public:
    Bundle(string name, double discount_rate);
    
    // do stuff to delete things
    virtual ~Bundle();
    
    virtual void addItem(Item* item);
    
    virtual void removeItem(Item* item);
    
    virtual void print() const;
};

#endif /* BUNDLE_H */

