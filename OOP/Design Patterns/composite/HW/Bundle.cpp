/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 

 */

#include "Bundle.h"

Bundle::Bundle(string name, double discount_rate): Item(name, 0) {
    m_name = name;
    m_discount_rate = discount_rate;
}

Bundle::~Bundle() {
}

void Bundle::addItem(Item* item){
    m_items.push_back(item);
    m_price += item->getPrice()*m_discount_rate;
}

void Bundle::removeItem(Item* item){
    remove(m_items.begin(), m_items.end(), item);
    m_price -= item ->getPrice()*m_discount_rate;
}

void Bundle::print() const{
    cout << "Bundle " << m_name << " contains:(";
    for(auto a: m_items){
        a->print();
    }
    cout << ");" << "Bundle Price:" << m_price << ");";
}