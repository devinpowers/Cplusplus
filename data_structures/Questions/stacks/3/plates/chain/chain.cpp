
/*  
    you need to return a reference otherwise you're doing a copy of the object

*/

#include<iostream>

using  namespace std;

class Test
{
    
public:
    Test() {};
    Test(Test& test);
    Test& Display(); // Function 1
    Test& Show();    // Function 2
    Test& Result();  // Function 3
};

Test::Test(Test& test) {
    cout<<"Test::Test(Test& test)\n";
}

Test& Test::Display()
{
    cout<<"Function 1"<<endl;
    return *this;  // Return this pointer
}

Test& Test::Show()
{
    cout<<"Function 2"<<endl;
    return *this;
}

Test& Test::Result()
{
    cout<<"Result 3"<<endl;
    return *this;
}

int main()
{
    Test Obj;
    
    //Here i have called all the three function in a sequence.    
    Obj.Display().Show().Result(); //This is called Function Chaining
    
    cout << "*** " << endl;
}
 