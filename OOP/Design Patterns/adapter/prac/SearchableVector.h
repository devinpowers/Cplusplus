/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SearchableVector.h
 * Author: tonys
 *
 * Created on February 17, 2019, 8:03 PM
 */

#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H

using namespace std;

class SearchableVector {
public:
    SearchableVector();
    SearchableVector(const SearchableVector& orig);
    virtual ~SearchableVector();
    
    virtual unsigned int getSize() const = 0;
    virtual unsigned int getElement(int a) const = 0;
    virtual unsigned int getMiddle(int a, int b) const = 0;
    virtual unsigned int getQuery() const = 0;
private:

};

#endif /* SEARCHABLEVECTOR_H */

