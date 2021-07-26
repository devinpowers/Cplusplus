/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Phone.cpp
 */

#include "Phone.h"

Phone::Phone(string name, double price, int year):Item(name,price) {
    m_year = year;
}

Phone::~Phone() {
}

void Phone::print() const{
    cout << "(Phone Name=" << m_name << ", Phone Price=" << m_price << ");";
}