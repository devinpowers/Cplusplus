
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
{  // Fill Array with 0's
  for (size_t i=0; i<sz; ++i)
  {
    ary[i] = val+i;
  }
    
}


ostream& dump (ostream& out, int ary[], size_t sz, size_t width=5){
  //print array as a block
  for(size_t i=0; i < sz; ++i){
    out << setw(width) << *(ary + i);
    if (i%10 != 9 && i != sz-1)
      out << ", ";
    else
      out << endl;
  }
  out << endl;
  return out;
}
	
int main (){
  size_t sz=5;
  int ary1[sz];
  fill(ary1, sz, 10);
  cout << "DUMP: " << endl;
  dump(cout, ary1, sz);  

  // basic new
  long *lptr1, *lptr2;
  MyClass *mcptr, *mcptr2;

  lptr1 = new long;   // uninitialized
  lptr2 = new long{1234567}; // initialized
  mcptr = new MyClass; // default constructor
  mcptr2 = new MyClass(123456, 123, "3param ctor");

  cout << "lptr1:"<< *lptr1 << endl;  
  cout << "lptr2:"<< *lptr2 << endl;
  cout << "MyClass default:"<< *mcptr << endl;
  cout << "MyClass 3 param:"<< *mcptr2 << endl;

  // delete them when done
  delete lptr1;
  delete lptr2;  
  delete mcptr;
  delete mcptr2;

  cout << "________________________________" << endl;
  cout << endl;
  // dynamic array
  size_t size;
  cout << "How big to make the array:";
  cin >> size;
  // not an array type, only a pointer
  // long *ary = new long[size];   // not initialized
  int *ary = new int[size]{}; // initialize all!
  fill(ary, size, 10);
  cout << "DUMP: " << endl;
  dump(cout, ary, size); // prints the array

  cout << "1:"<<ary[0]<<endl;
  cout << "n-1:"<<ary[size-1]<<endl;
  cout << "Size:"<<sizeof(ary)<<endl; //pointer,not array type!

  // if you make it, you must delete it. Note []
  delete [] ary;
}


