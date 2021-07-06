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

  // Try out our functions fill and dump
  size_t sz=5; // std::size_t is commonly used for array indexing and loop counting.
  int ary1[sz]; // Array of Size 5
  fill(ary1, sz, 10);  // Fill the array with Values
  cout << "DUMP: " << endl;
  dump(cout, ary1, sz);  

  // basic new 
  long *lptr1, *lptr2;    // Long Data Type

  MyClass *mcptr, *mcptr2; // Class Data Type

  lptr1 = new long;   // uninitialized
  lptr2 = new long{1234567}; // initialized

  *lptr1 = 23;

  mcptr = new MyClass; // default constructor
  mcptr2 = new MyClass(123456, 123, "3param ctor");  

  cout << "Long Data Type Values: " << endl;
  cout << "lptr1:"<< *lptr1 << endl;  
  cout << "lptr1 Address: " << lptr1 << endl;
  cout << "lptr2:"<< *lptr2 << endl;

  cout << endl;

  cout << "MyClass Data Types: " << endl;
  cout << "MyClass default:"<< *mcptr << endl; // prints ostrram& operator
  cout << "Random" << mcptr << endl; // Address 
  cout << "MyClass 3 param:"<< *mcptr2 << endl;    // prints ostream& operator

  // delete them when done
  delete lptr1;
  delete lptr2;  
  delete mcptr;
  delete mcptr2;
}




