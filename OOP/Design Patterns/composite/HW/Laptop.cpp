/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 

 */

#include "Laptop.h"

Laptop::Laptop(string name, double price, string speed):Item(name,price) {
    m_speed = speed;
}

Laptop::~Laptop() {
}

void Laptop::print() const{
    cout << "(Laptop " << "Name=" << m_name << ", Laptop Price=" << m_price << ");";
}