#include <iostream>
#include <string>


class Entity {
    private:
        int m_X, m_Y;
    public:
        int GetX() const
        {
            // m_X = 2; // wont work, more like a read only method, only read data from the class
            return m_X;    
        }

    void SetX(int x) // can't declare this as const, becuase he obviously need to write to it
    {
        m_X = x;
    }
};
int main()
{
    const int MAX_AGE = 98;  // you can't change/modify a integer ; simplist way

    int* const a = new int;

    *a = 2;
   
   // a = (int*)& MAX_AGE;


    std::cout << *a << std::endl;
}