#include "animal.h"
#include <iostream>

int main()
{
    Shelter shelter;
    for (auto name : {"Dog 1", "Cat 1", "Dog 2", "Dog 3 ", "Cat 2", "Cat 3", "Cat 4", "Dog 4", "Dog 5", "Dog 6", "Cat 5", "Cat 6", "Dog 7", "Dog 8", "Cat 7", "Dog 9"})
    {
        if (name[0] == 'D')
            shelter.enqueue(Animal::create<Dog>(std::move(name)));
        else if (name[0] == 'C')
            shelter.enqueue(Animal::create<Cat>(std::move(name)));
    }

    std::cout << "any --> " << shelter.dequeueAny()->getName() << std::endl;
    std::cout << "any --> " << shelter.dequeueAny()->getName() << std::endl;

    std::cout << "dog --> " << shelter.dequeueDog()->getName() << std::endl;
    std::cout << "cat --> " << shelter.dequeueCat()->getName() << std::endl;
    std::cout << "cat --> " << shelter.dequeueCat()->getName() << std::endl;
    std::cout << "cat --> " << shelter.dequeueCat()->getName() << std::endl;
    std::cout << "cat --> " << shelter.dequeueCat()->getName() << std::endl;
    std::cout << "dog --> " << shelter.dequeueDog()->getName() << std::endl;
    std::cout << "dog --> " << shelter.dequeueDog()->getName() << std::endl;
    std::cout << "cat --> " << shelter.dequeueCat()->getName() << std::endl;
    std::cout << "any --> " << shelter.dequeueAny()->getName() << std::endl;
    return 0;
}
