
#include<iostream>

int Factorial(int n)
{
    std::cout << "I am Calculating F( " << n << ")\n";
    if (n == 0)
    {
       return 1;
    }
    int F = n*Factorial(n-1);
    std::cout << "Done ! F(" << n << ") = " << F << "\n";
    return F;

}
int main()
{
    int n;
    std::cout << "Input a number n:  ";
    std::cin >> n;

    int result = Factorial(n);
    std::cout << result << std::endl;
}

