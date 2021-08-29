


#include<iostream>

int Fib(int n){
    
	std::cout << "n: " << n << std::endl;
    if (n <= 1)
    {
        return n;
    }
    
    return Fib(n-1) + Fib(n-2);
}

int main()
{
    int n;
    std::cout << "Give me an n: " ;
    std::cin >> n;

    int result = Fib(n);
    std::cout << result << std::endl;

}