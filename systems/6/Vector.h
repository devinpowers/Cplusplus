
#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>

// A Vector represents a vector in 3-space.
class Vector {
 public:
  // Default Constructor: construct the vector (0,0,0)
  Vector() : x_(0.0), y_(0.0), z_(0.0) { }

  // Construct the vector (x,y,z)
  Vector(const float x, const float y, const float z) : x_(x), y_(y), z_(z) { }

  // Copy constructor
  Vector(const Vector& v) : x_(v.x_), y_(v.y_), z_(v.z_) { }

  // Destructor
  ~Vector() { }

  // Getters
  float get_x() const { return x_; }
  float get_y() const { return y_; }
  float get_z() const { return z_; }

  // Assignment operator
  Vector& operator=(const Vector& rhs);

  // Updating assignment
  Vector& operator+=(const Vector& rhs);
  Vector& operator-=(const Vector& rhs);

  // Dot product as a member function
  float operator*(const Vector& rhs) const;

 private:
  // The representation of a Vector is three floating-point numbers giving
  // the x, y, and z magnitudes.
  float x_, y_, z_;
};  // class Vector

// Note: It is bad style to leave commented-out code, but we will do so here
// for the purposes of illustration/comparison.  Non-member version of
// operator* preferred generally (see Google C++ Style Guide), though not
// wanted for this exercise as we required everything to be a member function

// float operator*(const Vector& a, const Vector& b);

#endif  //  VECTOR_H_
