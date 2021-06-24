#include <iostream>

using std::endl;
using std::cout;

class Demo {
private:
  int num;
  char ch;
public:
  void setMyValues(int num, char ch){ // Setter
    this->num =num;
    this->ch=ch;
  }
  void displayMyValues(){
    cout<<num<<endl;
    cout<<ch;
  }
};



int main(){
  Demo obj; // create an instance of the class

  obj.setMyValues(100, 'A');  // set the values of the class
  obj.displayMyValues(); // Call method to print
  return 0;
}