/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortIncreasing.cpp
 * Author: tonys
 * 
 * Created on February 13, 2019, 5:43 PM
 */

#include "BubbleSortIncreasing.h"

bool BubbleSortIncreasing::needSwap(IntegerVectorSortableSearchable* integerVectorSortableSearchable,int i, int j) const{
    return !integerVectorSortableSearchable -> smaller(i,j);
}

void BubbleSortIncreasing::sort(IntegerVectorSortableSearchable* integerVectorSortableSearchable){
    bool sorted = false;
        int n=integerVectorSortableSearchable->getSize();
        while( !sorted ){
            sorted = true;
            for(int i=1; i<n; i++){
                if(!integerVectorSortableSearchable->smaller(i-1,i)){
                    
                    integerVectorSortableSearchable->swap(i-1,i);
                    sorted = false;
                }
            }
            n--;
        }
}