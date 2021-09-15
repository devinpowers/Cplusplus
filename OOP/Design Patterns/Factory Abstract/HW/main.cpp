/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tonysulfaro
 *
 * Created on February 9, 2019, 7:50 PM
 */

#include "BinarySearch.h"
#include "IntegerVectorSearch.h"

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
 IntegerVectorSearchable ivs;
 ivs.insertInteger(1);
 ivs.insertInteger(2);
 ivs.insertInteger(3);
 ivs.insertInteger(4);
 ivs.insertInteger(5);
 ivs.insertInteger(6);
 ivs.insertInteger(7);
 ivs.insertInteger(8);
 ivs.insertInteger(9);
 BinarySearch bs;
 cout<<"All integers are: "<<endl;
 ivs.print();
 int query = 1;
 while(query!=0){
 cout<<"Please input the number that you want to search: ";
 cin>>query;
 ivs.setQuery(query);
 int searchResult=bs.search(&ivs);
 cout<<endl;
 if(searchResult==-1) cout<<"There is no match!"<<endl;
 else cout<<"Find match at the "<<searchResult<<"th element!"<<endl;
 }
 return 0;
}


