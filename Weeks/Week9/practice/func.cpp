

#include <iostream>
using std::cout;
using std::endl;


void print_(int &number ){
    number = number * 10;

    cout << "Number after being multipled " << number << endl;
}

int main(){

    int number = 20;

    cout << "Number before we pass to function " << number << endl;
    print_(number);

    cout << "Number after we pass to function " << number << endl;

}