

#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using std::cout; using std::cin; using std::endl; using std::boolalpha;
using std::to_string; using std::string;

// Project 3
// Practice with Functions and Shit


long divisor_sum ( long number )
{
    long sum = 1;

    for (long i = 2; i <= int(sqrt(number)); i++){
        if ( number%i == 0){
            sum += 1;
            int d = number/i;
            if (d!=1){
                sum += d;
            }
        }
    }
    sum += number;
    return sum;
}

int main(){

    long input;

    cin >> input;

    cout << divisor_sum(input) << endl;

}