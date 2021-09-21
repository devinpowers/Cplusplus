// #pragma once

#ifndef MATH_H
#define MATH_H


#include<string>

struct MathVector{
  // data members
  int x = 0;
  int y = 0;

  // 2 constructors
  // =default uses default values of data members (above).
  // no other work required. You're welcome!
  MathVector()=default;
  MathVector(int x_, int y_) : x(x_), y(y_) {};

  // 4 function members you must write
  MathVector add (const MathVector&);
  MathVector mult(int);
  int mult(const MathVector&);
  double magnitude();
};

// a function! You must write
std::string vec_to_str(const MathVector&);


#endif