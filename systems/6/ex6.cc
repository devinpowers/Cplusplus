#include <iostream>
#include <string>

#include "Vector.h"

static const float kX1 = 1;
static const float kX2 = 2;
static const float kY1 = 3;
static const float kY2 = 3.1;
static const float kZ1 = -2.5;
static const float kZ2 = 2.7;

using std::cout;
using std::cerr;
using std::endl;
using std::string;

//////////////////////////////////////////////////////////////////////////////
// Helper function declarations

// Output the values of a Vector to std::cout in the format "(x, y, z)".
// Could have been part of VerifyVector, but this is useful functionality.
static void PrintVector(const Vector& v);

// Verify the values of a Vector and error out if verification fails.
static void VerifyVector(const Vector& v, const float x, const float y,
                         const float z, const string& msg);

// Returns true iff the address of v and
// the addres in p are the same
static bool VerifyAddress(const Vector& v, void* p);

// Call the setters to modify v's internal state by
// adding 1 to each variable in the Vector parameter v.
static void Increment(Vector v);


//////////////////////////////////////////////////////////////////////////////
// Main
//
// Create several Vectors and test their operations
int main() {
  // test constructors
  Vector v1;
  VerifyVector(v1, 0, 0, 0, "default ctor");
  Vector v2(kX1, kY1, kZ1);
  VerifyVector(v2, kX1, kY1, kZ1, "3-arg ctor");
  Vector v3(v2);
  VerifyVector(v3, kX1, kY1, kZ1, "cctor");

  // test assignment (including chaining)
  Vector v4(kX2, kY2, kZ2);
  v1 = v3 = v4;
  VerifyVector(v3, kX2, kY2, kZ2, "op=");
  VerifyVector(v4, kX2, kY2, kZ2, "op= chaining");

  // test updating assignment (including chaining)
  v1 = v3 += v2;
  VerifyVector(v3, kX1+kX2, kY1+kY2, kZ1+kZ2, "op+=");
  VerifyVector(v1, kX1+kX2, kY1+kY2, kZ1+kZ2, "op+= chaining");
  v1 = v3 -= v2;
  VerifyVector(v3, kX2, kY2, kZ2, "op-=");
  VerifyVector(v1, kX2, kY2, kZ2, "op-= chaining");

  // test * assignment
  float dot_product = v2 * v3;
  cout << "dot product: " << dot_product << endl;
  if (dot_product != kX1 * kX2 + kY1 * kY2 + kZ1 * kZ2) {
    cerr << "dot product failed!" << endl;
    return EXIT_FAILURE;
  }

  // Test pass by reference by calling Increment and seeing if
  // it changes the contents of the pair
  Vector v(kX1, kY1, kZ1);
  Increment(v);

  // use the accessors to see if the values have changed
  if (v.get_x() != kX1 || v.get_y() != kY1 || v.get_z() != kZ1) {
    cout << "Vector: pass-by-reference" << endl;
  } else {
    cout << "Vector: pass-by-value" << endl;
  }

  if (VerifyAddress(v, &v)) {
    cout << "Ref: same address" << endl;
  } else {
    cout << "Ref: different address" << endl;
  }

  return EXIT_SUCCESS;
}


//////////////////////////////////////////////////////////////////////////////
// Helper function definitions

static void PrintVector(const Vector& v) {
  cout << "(" << v.get_x() << ", " << v.get_y() << ", " << v.get_z() << ")";
}

static void VerifyVector(const Vector& v, const float x, const float y,
                         const float z, const string& msg) {
  // print the values of the Vector
  cout << msg << ": ";
  PrintVector(v);
  cout << endl;

  // verify that they match the expected values
  if (v.get_x() != x || v.get_y() != y || v.get_z() != z) {
    cerr << msg << " failed!" << endl;
    exit(EXIT_FAILURE);
  }
}

void Increment(Vector v) {
  Vector one(1, 1, 1);
  v += one;
}

bool VerifyAddress(const Vector& v, void* p) {
  return &v == reinterpret_cast<Vector *>(p);
}