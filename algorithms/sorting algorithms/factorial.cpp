#include <iostream>
using namespace std;
  
// function to find factorial of given number
unsigned int factorial(unsigned int n)
{
    cout << "I am Calculating F (" << n << ")" << endl;
    if (n == 0)
        return 1; // Base/Termination condition
    
    int F = n * factorial(n - 1);
    cout << "Done! F(" << n << ")" << " = " << F << endl;
    return F;
}
  
// Driver code
int main()
{
    int num = 5;
    cout << factorial(num) << std::endl;
    return 0;
}