#include "Vector.h"

#include <iostream>

using std::ostream;

//////////////////////////////////////////////////////////////////////////////
// Member functions

Vector& Vector::operator=(const Vector& rhs) {
  // Replace state of 'this' with values from rhs; do nothing if
  // self-asignment. (Even though in this particular case there would
  // be no harm, it's always best to check for self-assignment and do
  // nothing if detected.)
  if (this != &rhs) {
    x_ = rhs.x_;
    y_ = rhs.y_;
    z_ = rhs.z_;
  }
  // Return reference to lhs of assignment
  return *this;
}

Vector& Vector::operator+=(const Vector& rhs) {
  x_ += rhs.x_;
  y_ += rhs.y_;
  z_ += rhs.z_;
  return *this;
}

Vector& Vector::operator-=(const Vector& rhs) {
  x_ -= rhs.x_;
  y_ -= rhs.y_;
  z_ -= rhs.z_;
  return *this;
}


// operator* as a member function
float Vector::operator*(const Vector& rhs) const {
  return x_ * rhs.x_ + y_ * rhs.y_ + z_ * rhs.z_;
}

// Note: It is bad style to leave commented-out code, but we will do so here
// for the purposes of illustration/comparison.  Non-member version of
// operator* preferred (see Google C++ Style Guide) and can be found below.
// However, we did not expect this as ex6 was expected to only have
// member functions, no non-member functions.

// operator* as a non-member function
// float operator*(const Vector& a, const Vector& b) {
//   return a.get_x()*b.get_x() + a.get_y()*b.get_y() + a.get_z()*b.get_z();
// }