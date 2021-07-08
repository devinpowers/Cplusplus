
#ifndef LINE_H_
#define LINE_H_

#include <iostream>
using std::cout;
#include <string>
using std::string;

class Line {

   public:
      int getLength( void );
      Line( int len );             // simple constructor
      Line( const Line &obj);  // copy constructor
      ~Line();                     // destructor

   private:
      int *ptr;
};

void display(Line obj);
#endif

