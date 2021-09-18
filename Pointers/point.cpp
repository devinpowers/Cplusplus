
#include <iostream>
using std::cout;
using std::endl;


int SumOfElements(int A[])
{
  int sum = 0;

  int size = sizeof(A)/sizeof(A[0]);

 // cout << "SOE - Size of A = " << sizeof(A) << endl;
  // cout << "Size of A[0] = " << sizeof(A[0]) << endl;


  for(int i = 0; i < size; i++)
  {
    sum += A[i];
  }

  return sum;
}


int main()
{
  int A[] = {1,2,3,4,5};


  int total = SumOfElements(A);

 // cout << "SOE - Size of A = " << sizeof(A) << endl;
  // cout << "Size of A[0] = " << sizeof(A[0]) << endl;

  cout << "Sum of the Elements: " << total << endl;
 
}



