/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IntegerVectorSortableSearchable.cpp
 * Author: tonys
 * 
 * Created on February 17, 2019, 7:53 PM
 */

#include "IntegerVectorSortableSearchable.h"

IntegerVectorSortableSearchable::IntegerVectorSortableSearchable() {
}

IntegerVectorSortableSearchable::IntegerVectorSortableSearchable(const IntegerVectorSortableSearchable& orig) {
}

IntegerVectorSortableSearchable::~IntegerVectorSortableSearchable() {
}

bool IntegerVectorSortableSearchable::smaller(int i, int j) const {
        if(getInteger(i) < getInteger(j))
            return true;
        else
            return false;
    }

void IntegerVectorSortableSearchable::swap(int i, int j){
        int temp = m_IntegerVector[i];
        m_IntegerVector[i]=m_IntegerVector[j];
        m_IntegerVector[j]=temp;
    }


void IntegerVectorSortableSearchable::print() const {
        for(int i=0; i<getSize(); i++)
            cout<<m_IntegerVector[i]<<"; "<<endl;
    }

int IntegerVectorSortableSearchable::getInteger(int i) const{
        return m_IntegerVector[i];
    }