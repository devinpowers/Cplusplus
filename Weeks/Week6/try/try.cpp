

#include <iostream>
using std::cout; using std::endl;

*//

int main()
{
    int a;
    a = 98;
    try  {
       throw a;
    }
    catch (int x)  {
        cout << "Caught " << x << endl;
    }
    catch (...)  {
        cout << "Default Exception\n";
    }
    return 0;
}





