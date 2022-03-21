#include <iostream>
#include <thread>

void thread_function()
{
    std::cout << "thread function\n";
}
 
// t2.cpp
int main()
{
    std::thread t(&thread_function);
    std::cout << "main thread\n";
    // t.join();
    t.detach();
    return 0;
}