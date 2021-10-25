#include<iostream>

int Factorial(int n)
{
    if (n == 0)
    {
        std::cout << "Exit condtion " << std::endl;
        return 1;
    }
    int F = n*Factorial(n-1);
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
