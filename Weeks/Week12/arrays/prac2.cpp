
// Program with memory leak
#include <iostream>
using namespace std;
 
// function with memory leak
void func_to_show_mem_leak()
{
    int* ptr = new int(5);
 
    // body
 
    // return without deallocating ptr
    return;
}
 
// driver code
int main()
{
 
    // Call the function
    // to get the memory leak
    func_to_show_mem_leak();
 
    return 0;
}