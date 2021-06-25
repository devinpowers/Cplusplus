#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

struct Vector2{

    float x,y;
    
    Vector2(float x, float y): x(x), y(y) {}  // constructor

};

int main() {

    Vector2 position(4.0f, 4.0f);
    Vector2 speed(0.5f, 1.5f);
    
    cin.get();
}
