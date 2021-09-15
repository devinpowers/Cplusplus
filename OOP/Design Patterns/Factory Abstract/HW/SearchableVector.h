/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SearchableVector.h
 * Author: tonysulfaro
 *
 * Created on February 9, 2019, 8:24 PM
 */

#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H

using namespace std;

class SearchableVector{
public:
    virtual unsigned int getSize() const = 0;
    virtual unsigned int getElement(int a) const = 0;
    virtual unsigned int getMiddle(int a, int b) const = 0;
    virtual unsigned int getQuery() const = 0;
};


#endif /* SEARCHABLEVECTOR_H */

