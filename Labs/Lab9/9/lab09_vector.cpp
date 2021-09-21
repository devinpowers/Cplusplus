#include<string>
#include<sstream>
#include<cmath>
using std::string;
using std::ostringstream;
#include<iostream>
using std::cout; using std::endl;

#include "lab09_vector.h"

// Constructor for values
MathVector::MathVector(long x_value, long y_value){
	x = x_value;
	y = y_value;
}

// Add Vector (overload the add)
MathVector MathVector::add(const MathVector & other_vec){
	cout << "Running the add vector functions " << endl;
	return(MathVector(x+other_vec.x,y+other_vec.y));
}

// Multiply Vector by scalars (overload multiply)
MathVector MathVector::mult(long scalar){
	cout << "Running the Multiply by scalar vector functions " << endl;
	return MathVector(x*scalar,y*scalar);
}

// Multiply Vector by another Vector
long MathVector::mult(const MathVector & vec){
	cout << "Running the Multiply by andother Vector Function" << endl;
	x*=vec.x;
	y*=vec.y;
	return x+y;
}

// Magnitude of a vector using Pythagorean Theorem
double MathVector::magnitude(){
	cout << "using the magnitude function !!!" << endl;
	return(sqrt((x*x)+(y*y)));
}

// prints out the vector (returns a string)
string vec_to_str(const MathVector& v){
	ostringstream oss;
	oss << v.x << ":" << v.y;
	return oss.str();
}


