/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IntegerVectorSortable.cpp
 * Author: tonys
 * 
 * Created on February 17, 2019, 8:05 PM
 */

#include "IntegerVectorSortable.h"

#include <iostream>
#include <vector>

using namespace std;

IntegerVectorSortable::IntegerVectorSortable() {
}

IntegerVectorSortable::IntegerVectorSortable(const IntegerVectorSortable& orig) {
}

IntegerVectorSortable::~IntegerVectorSortable() {
}

bool IntegerVectorSortable::smaller(int i, int j) const{
    if(getInteger(i) < getInteger(j))
            return true;
        else
            return false;
}

void IntegerVectorSortable::swap(int i, int j){
    int temp = m_IntegerVector[i];
    m_IntegerVector[i]=m_IntegerVector[j];
    m_IntegerVector[j]=temp;
}

void IntegerVectorSortable::print() const{
    for(int i=0; i<getSize(); i++)
            cout<<m_IntegerVector[i]<<"; "<<endl;
}

IntegerVectorSortable::getInteger(int i) const{
    return m_IntegerVector[i];
}

unsigned int IntegerVectorSortable::getSize() const{
    return m_IntegerVector.size();
}

IntegerVectorSortable::insertInteger(int element){
    m_IntegerVector.push_back(element);
}