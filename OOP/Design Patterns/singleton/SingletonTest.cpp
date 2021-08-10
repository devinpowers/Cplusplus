#include "Singleton.h"

#include <iostream>

int main()
{
	Singleton * singleton1 = Singleton::GetInstance();
	Singleton * singleton2 = Singleton::GetInstance();


	if(singleton1 == singleton2)
	{
		std::cout << "Singleton addresses match as expected\n";
	}
	else
	{
		std::cout << "BUG! Singleton addresses do not match\n";
	}

	return 0;
}