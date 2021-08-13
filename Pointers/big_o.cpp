

#include <iostream>

void logFunc(int n)
{
    while (n > 1)
    {
        n = (n/2);
        std::cout << "Iteration Number: " << n << std::endl;
    }

}

int main() {

    // Call Square function
    int num = 8;

    logFunc(num);

}


