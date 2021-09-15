/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: alexliu
 *
 * Created on January 26, 2017, 5:34 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;
#include "BubbleSort.h"
#include "IntegerVectorSortable.h"

int main(int argc, char** argv) {
    BubbleSort bs;
  
    IntegerVectorSortable ivs;
    ivs.insertInteger(5);
    ivs.insertInteger(4);
    ivs.insertInteger(6);
    ivs.insertInteger(10);
    
    cout<<"***************** Before Sorting Integers Decreasing"<<endl;
    ivs.print();
    
    cout<<"***************** After Sorting Integers Decreasing"<<endl;
    bs.sortDecreasing(&ivs);
    ivs.print();

    cout<<"***************** After Sorting Integers Increasing"<<endl;
    bs.sortIncreasing(&ivs);
    ivs.print();

    return 0;
}

