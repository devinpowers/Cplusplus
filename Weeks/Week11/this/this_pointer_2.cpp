#include <iostream>
using std::endl;
using std::cout;

class Demo {
private:
  int num;
  char ch;
public:
  Demo &setNum(int num){
    this->num =num;
    return *this;
  }
  Demo &setCh(char ch){
    this->num++;
    this->ch =ch;
    return *this;
  }

  
  void displayMyValues(){
    cout<<num<<endl;
    cout<<ch;
  }
};
int main(){
  Demo obj;
  //Chaining calls
  obj.setNum(100).setCh('A');
  obj.displayMyValues();
  return 0;
}
/// Another example of using this pointer to return the reference of current object so that,
// you can chain function calls, this way you can call all the functions for the current object in one go.