#include<iostream>
using std::endl;
using std::cout;
#include<string>

#include "math_vector.h"

int main (){
  
  MathVector v1;
  MathVector v2(3,2);
  MathVector v3(10,12);

  std::cout << "V1:" << vec_to_str(v1) << ", V2:" << vec_to_str(v2) << ", V3:" << vec_to_str(v3) << endl;;


  MathVector add_result = v1.add(v2);
  std::cout << "Sum of v1 and v2 is: " << vec_to_str(add_result) << std::endl;
  MathVector add_result2 = v2.add(v3);
  std::cout << "Sum of v2 and v3 is: " << vec_to_str(add_result2) << std::endl;

  int scalar = 20;
  MathVector mult_result = v2.mult(scalar);
  cout << "mult of v2 and " << scalar << " is: " << vec_to_str(mult_result) << endl;

  int result = v1.mult(v2);
  std::cout << "mult of v1 and v2 is: " << result << std::endl;

  int result2 = v2.mult(v3);
  std::cout << "mult of v2 and v3 is: " << result2 << std::endl;
  
  double dbl_result = v2.magnitude();
  std::cout << "magnitude of v2 is: " << dbl_result << std::endl;  
}
