// Memoization


#include<iostream>

// Global Only one copy is created
int F[51];

int Fib(int n){

    if (n <= 1)
    {
        return n;
    }
    if(F[n] != -1)
    {
        return F[n];
    }
    F[n] = Fib(n-1) + Fib(n-2);
    return F[n];
}

int main()
{
    for (int i = 0; i < 51; i++)
    {
        F[i] = -1;
    }


    int n;
    std::cout << "Give me an n: " ;
    std::cin >> n;

    int result = Fib(n);
    std::cout << result << std::endl;
}


