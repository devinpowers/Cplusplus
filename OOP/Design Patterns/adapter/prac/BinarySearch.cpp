/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinarySearch.cpp
 * Author: tonys
 * 
 * Created on February 17, 2019, 7:48 PM
 */

#include "BinarySearch.h"
#include "SearchableVector.h"

BinarySearch::BinarySearch() {
}

BinarySearch::BinarySearch(const BinarySearch& orig) {
}

BinarySearch::~BinarySearch() {
}

int BinarySearch::search(SearchableVector* searchableVector){
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
