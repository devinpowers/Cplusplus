#include<iostream>
using namespace std;

int global = 1;

int& getNumber() {
        return global; // return global by reference.
}

int main() {

        cout<<"before "<<global<<endl;
        getNumber() = 2; // assign 2 to the return value which is reference.
        cout<<"after "<<global<<endl;
        cout<<"after "<<global<<endl;
        cout<<"after "<<global<<endl;

        return 0;
}