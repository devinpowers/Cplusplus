
#include<iostream>
// Recursion

int Factorial(int n){
    std::cout << "I am Calculating F(" << n << ")\n";
    if (n == 0)
    {
        return 1;
    }
    else {
    
        int F = n*Factorial(n-1);
        std::cout << "Done ! F(" << n << ") = " << F << "\n";
        return F;
    }
    
}

int main()
{
    int n;
    std::cout << "Give me an n: " ;
    std::cin >> n;

    int result = Factorial(n);
    std::cout << result << std::endl;

}



