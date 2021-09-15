/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinarySearch.h
 * Author: tonysulfaro
 *
 * Created on February 9, 2019, 9:42 PM
 * 
 * Sources Used: https://en.wikipedia.org/wiki/Binary_search_algorithm
 */

#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include "SearchableVector.h"

#include <iostream>
#include <vector>

using namespace std;

class BinarySearch{
public:
    int search(SearchableVector* searchableVector){
        int left = searchableVector->getElement(0);
        int right = searchableVector->getElement(searchableVector->getSize()-1);
        
        while(left <= right){
            
            int middle = searchableVector->getMiddle(left, right);
            
            // ye ole fashioned debugging
            //cout << left << right << middle << endl;
            
            // element too small move larger
            if(searchableVector->getElement(middle-1) < searchableVector->getQuery()){
                left = middle + 1;
            }
            // element too large check smaller subset
            else if(searchableVector->getElement(middle-1) > searchableVector->getQuery()){
                right = middle - 1;
            }
            // we have a match
            if(searchableVector->getElement(middle-1) == searchableVector->getQuery()){
                return middle-1;
            }
        }
        // didnt find it, so sad
        return -1;
    }
};


#endif /* BINARYSEARCH_H */

