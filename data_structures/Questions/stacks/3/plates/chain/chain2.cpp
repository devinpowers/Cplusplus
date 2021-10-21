#include <iostream>

using namespace std;

class Base{
    int _a, _b;

    public:

        Base& seta(int a){

            _a = a;
            return *this;
        }
    
        Base& setb(int b){
            // Set B
            _b = b; 
            return *this;
        }

        void print() {

            cout << "a = " << _a << "  b = " << _b << endl;
        }

};

int main(){
    Base b;

    b.seta(5).setb(19).print();
    b.print();
}

/*
   return by Reference & so it's refering to the correct object
    


*/