

#include <iostream>

using namespace std;

class Singleton
{
public:
    static Singleton *getInstance();
private:
    Singleton(){}
    static Singleton* s_instance;
};

Singleton* Singleton::s_instance = 0;

Singleton* Singleton::getInstance()
{
    if(!s_instance) {
        s_instance = new Singleton();
        std::cout << "There is no instance so we created one.\n";
        return s_instance;
    }else{
        std::cout << "Hey this is the same instance!\n";
      return s_instance;
    }
}

int main()
{
 Singleton *singlA = Singleton::getInstance();
 Singleton *singlB = Singleton::getInstance();
 return 0;
}
