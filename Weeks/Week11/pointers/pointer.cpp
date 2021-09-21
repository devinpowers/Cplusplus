
#include <iostream>

using std::cout;
using std::endl;


class MyClass
{
private:
    int counter;
public:
    void Foo()
    { 
        // counter--;
        std::cout << "Foo" << std::endl;    
  
    }

    void Foo() const
    {
        // counter ++;
        std::cout << "Foo const" << std::endl;
    }

};

int main()
{
    MyClass cc;

    const MyClass& ccc = cc;
    cc.Foo(); // Will run the Foo() without the const since it's not a Const Object

    cout << "Should print from the Foo() const member function" << endl;
    ccc.Foo(); // Will run the foo const!
}