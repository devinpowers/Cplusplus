#include "Vector.h"

#include <iostream>

using std::ostream;

namespace vector333 {

//////////////////////////////////////////////////////////////////////////////
// Vector member functions

// default constructor
Vector::Vector() {
  init(0.0, 0.0, 0.0);
}

// Vector(x,y,z) constructor
Vector::Vector(const float x, const float y, const float z) {
  init(x, y, z);
}

// copy constructor
Vector::Vector(const Vector& other) {
  init(other.v_[0], other.v_[1], other.v_[2]);
}

// private initialization function
// allocate array for vector and initialize with given coordinates
void Vector::init(const float x, const float y, const float z) {
  v_ = new float[3];
  v_[0] = x;
  v_[1] = y;
  v_[2] = z;
}

// destructor - free dynamic storage
Vector::~Vector() {
  delete [] v_;
}

// Vector assignment
Vector& Vector::operator=(const Vector& rhs) {
  // replace state of this with values from rhs; do nothing if
  // self-asignment. (Even though in this particular case there would
  // be no harm, it's always best to check for self-assignment and do
  // nothing if detected.)
  if (this != &rhs) {
    v_[0] = rhs.v_[0];
    v_[1] = rhs.v_[1];
    v_[2] = rhs.v_[2];
  }
  // return reference to lhs of assignment
  return *this;
}

// Updating assignments for vectors

Vector& Vector::operator+=(const Vector& rhs) {
  v_[0] += rhs.v_[0];
  v_[1] += rhs.v_[1];
  v_[2] += rhs.v_[2];
  return *this;
}

Vector& Vector::operator-=(const Vector& rhs) {
  v_[0] -= rhs.v_[0];
  v_[1] -= rhs.v_[1];
  v_[2] -= rhs.v_[2];
  return *this;
}


//////////////////////////////////////////////////////////////////////////////
// Friend functions that are not members of class Vector

// dot-product: if a is (a,b,c) and b is (x,y,z),
// return ax+by+cz
float operator*(const Vector& a, const Vector& b) {
  return a.v_[0]*b.v_[0] + a.v_[1]*b.v_[1] + a.v_[2]*b.v_[2];
}

// scalar multiplication: if v is (a,b,c), return (ak,bk,ck)
Vector operator*(const float k, const Vector& v) {
  return Vector(v.v_[0] * k, v.v_[1] * k, v.v_[2] * k);
}
Vector operator*(const Vector& v, const float k) {
  return Vector(v.v_[0] * k, v.v_[1] * k, v.v_[2] * k);
}

// Stream output: << for Vectors
ostream& operator<<(ostream& out, const Vector& v) {
  out << "(" << v.v_[0] << "," << v.v_[1] << "," << v.v_[2] << ")";
  return out;
}


//////////////////////////////////////////////////////////////////////////////
// Additional non-member functions that are part of the Vector absraction

// Vector addition
Vector operator+(const Vector& a, const Vector& b) {
  Vector tmp = a;
  tmp += b;
  return tmp;
}

// Vector subtraction
Vector operator-(const Vector& a, const Vector& b) {
  Vector tmp = a;
  tmp -= b;
  return tmp;
}

}  // namespace vector333