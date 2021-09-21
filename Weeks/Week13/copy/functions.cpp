
#include<iostream>
using std::cout; using std::endl; 
#include<string>
using std::string;
#include<algorithm>
using std::copy;

#include "prac.h"


// Member functions definitions including constructor
Line::Line(int len) {
   cout << "Normal constructor allocating ptr" << endl;
   
   // allocate memory for the pointer;
   ptr = new int;
   *ptr = len;
}

Line::Line(const Line &obj) {
   cout << "Copy constructor allocating ptr." << endl;
   ptr = new int;
   *ptr = *obj.ptr; // copy the value
}

Line::~Line(void) {
   cout << "Freeing memory!" << endl;
   delete ptr;
}

int Line::getLength( void ) {
   return *ptr;
}


void display(Line obj) {
   cout << "Length of line : " << obj.getLength() <<endl;
}
