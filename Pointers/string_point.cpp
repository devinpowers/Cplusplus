


#include<iostream>
#include <string>

void print_array(char *C)
{
    int i = 0;
    while(*C != '\0')
    {
        std::cout<< *C;
        C++;
    }
}

int main()

{
    char *C = "Hello";
    print_array(*C);
    std::cout << std::endl;
}



