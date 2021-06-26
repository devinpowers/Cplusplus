
// Demonstration of constant object,
// show that constant object can only
// call const member function
#include<iostream>
using std::cout;
using std::endl;
class Demo
{   private:
    int value;

    public:
    Demo(int v = 0) {value = v;}

    void showMessage()
    {
        cout<<"Hello World, this showMessage ran" <<endl;
    }
    void display()const
    {
        cout<<"Hello world, this display() Function ran "<<endl;
    }
};
int main()
{
   //Constant object are initialised at the time of declaration using constructor
    const Demo d1;
    // d1.showMessage();  Error occurred if uncomment.
    d1.display();
    Demo d2;
    d2.showMessage(); // Will Run
    d2.display();  // Will RUn
    
}

