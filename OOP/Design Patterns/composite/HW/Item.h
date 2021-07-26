/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 

 */

#ifndef ITEM_H
#define ITEM_H

#include <string>
using std::string;

class Item {
protected:
    string m_name;
    double m_price;
public:
    Item(string name, double price);
    virtual ~Item();
    
    //getters
    virtual string getName() const{return m_name;}
    
    virtual double getPrice() const{return m_price;}
    
    virtual void print() const = 0;
};

#endif /* ITEM_H */

