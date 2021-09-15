/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IntegerVectorSearch.h
 * Author: tonysulfaro
 *
 * Created on February 9, 2019, 9:47 PM
 * 
 * This is where the vector data and  methods are stored
 */

#ifndef INTEGERVECTORSEARCH_H
#define INTEGERVECTORSEARCH_H

#include "SearchableVector.h"

#include <vector>
#include <iostream>

using namespace std;

class IntegerVectorSearchable: public SearchableVector{
protected:
    vector <int> m_IntegerVector;
    int m_query;
public:
    
    // default constructor
    IntegerVectorSearchable(){ 
        vector<int> m_IntegerVector;
        int m_query = 0;
    }
    
    void setQuery(int i){
        m_query = i;
    }
    
    // return vector size
    unsigned int getSize() const{
        return m_IntegerVector.size();
    }
    
    // retrieves element from vector given a position
    unsigned int getElement(int position) const{
        return m_IntegerVector[position];
    }
    
    unsigned int getQuery() const{
        return m_query;
    }
    
    void print(){
        for(int i = 0; i < getSize(); ++i){
            cout << getElement(i) << "; ";
        }
        cout << endl;
    }
    
    // push back new item
    void insertInteger(int i){
        m_IntegerVector.push_back(i);
    }
    
    unsigned int getMiddle(int a, int b) const{
        return (a+b) / 2;
    }
    
};

#endif /* INTEGERVECTORSEARCH_H */

