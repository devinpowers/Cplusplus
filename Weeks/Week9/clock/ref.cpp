
#include<iostream>
using std::cout;
using std::endl;

int main(){

int* ptr;
int var = 7;
int foo = 21;

ptr = &var;
ptr = &foo;

int& ref = var; 

cout  << ref << endl;
cout << var << endl;

}





