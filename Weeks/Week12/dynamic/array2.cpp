
#include<iostream>
using std::cout; using std::endl; using std::cin; using std::ostream;
#include<iomanip>
using std::setw;
#include<string>
using std::string;

void fill(int ary[], int size, int value)
{  // Fill Array with values
  for (int i=0; i<size; ++i)
  {
    ary[i] = value+i;
  }
}

ostream& dump (ostream& out, int ary[], int size, int width=5){
  //print array as a block
  for(int i=0; i < size; ++i){
    out << setw(width) << *(ary + i);    
    if (i%10 != 9 && i != size-1)
      out << ", ";
    else
      out << endl;
  }
  out << endl;
  return out;
}

int main (){
   // dynamic array
  int size;
  cout << "How Big to make the array:";
  cin >> size;
  // not an array type, only a pointer
  // long *ary = new long[size];   // not initialized
  int *ary = new int[size]{}; // initialize all!
  fill(ary, size, 10);
  dump(cout, ary, size);

  cout << "1:"<<ary[0]<<endl;
  cout << "n-1:"<<ary[size-1]<<endl;
  cout << "Size:"<<sizeof(ary)<<endl; //pointer,not array type!

  // if you make it, you must delete it. Note []
  delete [] ary;
}









