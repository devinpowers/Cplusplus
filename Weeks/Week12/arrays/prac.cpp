

#include <iostream>
using std::endl;
using std::cout;
#include<algorithm>
using std::copy; using std::sort; using std::transform;
#include<iterator>
using std::ostream_iterator; using std::begin; using std::end;
#include<string>

int main(){
   int arr[] = {20, 30, 40, 50};
   int size = 4;

  int *ptr_arr_front = arr;
  int *ptr_arr_back = arr+size;			

  cout << "The Front ptr: "<< ptr_arr_front << endl;
  cout << "1 past End ptr: "<< ptr_arr_back << endl; 


  // no begin or end method, but an array pointer IS an iterator
  sort(ptr_arr_front, ptr_arr_back);
  copy(ptr_arr_front, ptr_arr_back, ostream_iterator<int>(cout, ", ") );
  cout << endl;

    // begin() and end() functions  (not methods) do work
  // IF compiler knows size
  transform(begin(arr), end(arr), ostream_iterator<int>(cout, ", "),
       [](int x) {return x*2;}
       );
  cout << endl;
}