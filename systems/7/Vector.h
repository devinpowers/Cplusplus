#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>

namespace vector333 {

// A Vector represents a vector in 3-space.
class Vector {
 public:
  // constructors:

  // Default: construct the vector (0,0,0)
  Vector();

  // Construct the vector (x,y,z)
  Vector(const float x, const float y, const float z);

  // Copy constructor
  Vector(const Vector& v);

  // Destructor
  ~Vector();

  // Assignment
  Vector& operator=(const Vector& rhs);

  // Updating assignment
  Vector& operator+=(const Vector& rhs);
  Vector& operator-=(const Vector& rhs);

  // Additional functions that are not members of Vector but
  // need to be friends so they can access instance variables:

  // dot-product: if a is (a,b,c) and b is (x,y,z),
  // return ax+by+cz
  friend float operator*(const Vector& a, const Vector& b);

  // scalar multiplication: if v is (a,b,c), return (ak,bk,ck)
  friend Vector operator*(float k, const Vector& v);
  friend Vector operator*(const Vector& v, float k);

  // Stream output: define << for Vectors
  friend std::ostream& operator<<(std::ostream& out, const Vector& v);

 private:
  // A Vector is represented by a heap-allocated array of three
  // floats giving the x, y, and z magnitudes in v[0], v[1],
  // and v[2] respectively.
  float* v_;

  // private helper function used by constructors: initialize
  // vector state to given x, y, z values.
  void init(const float x, const float y, const float z);
};

// additional operations that are not members or friend functions but
// are part of the Vector abstraction

// addition and subtraction: produce a new Vector that results from
// element-wise addition or subtraction of this with other
Vector operator+(const Vector& a, const Vector& b);
Vector operator-(const Vector& a, const Vector& b);

}  // namespace vector333

#endif  //  VECTOR_H_