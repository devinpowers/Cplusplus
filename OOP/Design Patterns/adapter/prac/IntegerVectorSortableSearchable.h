/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IntegerVectorSortableSearchable.h
 * Author: tonys
 *
 * Created on February 17, 2019, 7:53 PM
 */

#ifndef INTEGERVECTORSORTABLESEARCHABLE_H
#define INTEGERVECTORSORTABLESEARCHABLE_H

#include "IntegerVectorSortable.h"
#include "SearchableVector.h"


#include <string>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class IntegerVectorSortableSearchable: public IntegerVectorSortable, public SearchableVector {
protected:
    vector <int> m_IntegerVector;
    int m_query = 0;
public:
    IntegerVectorSortableSearchable();
    IntegerVectorSortableSearchable(const IntegerVectorSortableSearchable& orig);
    virtual ~IntegerVectorSortableSearchable();

//    virtual unsigned int getSize() const {
//        return m_IntegerVector.size();
//    }
//    
    virtual bool smaller(int i, int j) const;
    
    virtual void swap(int i, int j);
    
    virtual void print() const;
    
    int getInteger(int i) const;
    
    int insertInteger(int element) {
        m_IntegerVector.push_back(element);
    }
    
    //////////////////////////////
    // now for searchable items
    //////////////////////////////

    void setQuery(int i){m_query = i;}
    
    // return vector size
    unsigned int getSize() const{return m_IntegerVector.size();}
    
    // retrieves element from vector given a position
    unsigned int getElement(int position) const{return m_IntegerVector[position];}
    
    unsigned int getQuery() const{return m_query;}
    
//    // push back new item
//    void insertInteger(int i){
//        m_IntegerVector.push_back(i);
//    }
    
    unsigned int getMiddle(int a, int b) const{return (a+b) / 2;}
};

#endif /* INTEGERVECTORSORTABLESEARCHABLE_H */

