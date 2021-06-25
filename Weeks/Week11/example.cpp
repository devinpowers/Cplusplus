

#include<iostream>
#include <string>

using std::cout;
using std::endl;

class Entity
{
    private:
        int m_X, m_Y;
        mutable int var;
    public:
        int GetX() const // promises not to touch anything in the function
        {
            var = 2;
            return m_X;
        }
        int GetX()
        {
            return m_X;
        }


        void SetX(int x)
        {
            m_X = x;
        }
};

void PrintEntity(const Entity& e)
{
    cout << e.GetX() << endl;
}

int main(){
    
    Entity e;

    e.SetX(23);

    PrintEntity(e);

}

// Make sure to add const to method if it's not suppose to modify the class

