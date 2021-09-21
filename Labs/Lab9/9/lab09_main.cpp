#include<string>
using std::string;
#include<iostream>
using std::endl;
using std::cout;

#include "lab09_vector.h"

int main(){

    MathVector v1;
    MathVector v2(3,2);
    MathVector v3(10,12);
    MathVector v4(9,2);
    MathVector v5(18,7);

    long a = 3;

    // Using the addition function to add two vectors
    v1 = v3.add(v2);
    cout << vec_to_str(v1) << endl;


    // Multiply Vector by a scaler

    v1 = v5.mult(a);

    cout << "Multiply by scalar output: " << vec_to_str(v1) << endl;


    cout <<vec_to_str(v3) << endl;

    // Multiply Vector by another Vector
    cout << v2.mult(v3) << endl;
    // Magnitude
    cout << v2.magnitude() << endl;

    // Vector to String
    cout << vec_to_str(v3) << endl;

}