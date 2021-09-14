/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortIncreasing.h
 * Author: tonys
 *
 * Created on February 13, 2019, 5:43 PM
 */

#ifndef BUBBLESORTINCREASING_H
#define BUBBLESORTINCREASING_H

#include <string>
#include <iostream>
#include <iomanip>
#include <vector>

#include "IntegerVectorSortableSearchable.h"

using namespace std;

class BubbleSortIncreasing {
public: 
    bool needSwap(IntegerVectorSortableSearchable* integerVectorSortableSearchable,int i, int j) const;
    void sort(IntegerVectorSortableSearchable* integerVectorSortableSearchable);
};

#endif /* BUBBLESORTINCREASING_H */

