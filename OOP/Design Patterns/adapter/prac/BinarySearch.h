/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinarySearch.h
 * Author: tonys
 *
 * Created on February 17, 2019, 7:48 PM
 */

#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include "SearchableVector.h"

class BinarySearch {
public:
    BinarySearch();
    BinarySearch(const BinarySearch& orig);
    virtual ~BinarySearch();
    
    int search(SearchableVector* searchableVector);
private:

};

#endif /* BINARYSEARCH_H */

