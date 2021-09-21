#include<iostream>
using std::cout; using std::endl; using std::cin; using std::ostream;
#include<iomanip>
using std::setw;
#include<string>
using std::string;

class MyClass{

private:
  long long_;
  int int_;
  string str_;
public:
  MyClass(): long_(0), int_(0), str_("default ctor") {};  // Default Constructor
  MyClass(long l, int i, string s): long_(l), int_(i), str_(s) {};  
  friend ostream& operator<<(ostream&, const MyClass&);      // Friend Functions
};

ostream& operator<<(ostream &out, const MyClass &c)
{
  // Overloading operator to print via cout << MyClass
  // Friend Function can access "private" attributes
  out << "l:"<< c.long_ << ", i:" << c.int_ << ", s:" << c.str_;
  return out;
}

void fill(int *ary, size_t sz, int val)
{  // Fill Array with values
  for (size_t i=0; i<sz; ++i)
  {
    ary[i] = val+i;
  }
}


ostream& dump (ostream& out, int ary[], size_t sz, size_t width=5){
  //print array as a block
  for(size_t i=0; i < sz; ++i){
    out << setw(width) << *(ary + i);    // setw -> will set the width of values to 5 for this example
    if (i%10 != 9 && i != sz-1)
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
  cout << "How big to make the array:";
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




