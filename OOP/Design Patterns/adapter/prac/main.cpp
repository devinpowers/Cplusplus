/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tonys
 *
 * Created on February 17, 2019, 7:42 PM
 */

#include <cstdlib>
#include "BinarySearch.h"
#include "BubbleSortIncreasing.h"
#include "SearchableVector.h"
#include "IntegerVectorSortableSearchable.h"
#include "IntegerVectorSortable.h"
#include "SortableVector.h"

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    IntegerVectorSortableSearchable ivss;
    ivss.setQuery(0);
    ivss.insertInteger(9);
    ivss.insertInteger(3);
    ivss.insertInteger(7);
    ivss.insertInteger(5);
    ivss.insertInteger(8);
    ivss.insertInteger(1);
    ivss.insertInteger(4);
    ivss.insertInteger(2);
    ivss.insertInteger(3);

    BubbleSortIncreasing bsi;
    bsi.sort(&ivss);

    BinarySearch bs;
    cout<<"All integers are: "<<endl;
    ivss.print();
    int query = 1;
    while(query!=0){
    cout<<"Please input the number that you want to search: ";
    cin>>query;
    ivss.setQuery(query);
    int searchResult=bs.search(&ivss);
    cout<<endl;
    if(searchResult==-1) cout<<"There is no match!"<<endl;
    else cout<<"Find match at the "<<searchResult<<"th element!"<<endl;
    }
    return 0;
}

