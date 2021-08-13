
#include <iostream>
#include <string>

void print(const char *C)
{
    // C[0] = 'A'; // We can't write/change any positons in the Array 
    while (*C != '\0')
    {
        std::cout << "C: " << *C << std::endl;
        C++;
    }
    std::cout << "\n";
}

int main()
{
    char C[20] = "Hello"; // String gets stored in the space for array
    print(C);
}


