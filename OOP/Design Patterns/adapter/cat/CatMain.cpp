

#include "LivingCat.h"
#include "RobotCat.h"
#include "RobotCatAdapter.h"

int main()
{
    Cat * livingCat = new LivingCat(std::string("Koko"));
    livingCat->Meow();

    RobotCat * robotCat = new RobotCat(std::string("Oliver"));
    Cat * robotCatAdapter = new RobotCatAdapter(robotCat);
    robotCatAdapter->Meow();

    // Delete allocated memory from the Heap
    delete livingCat;
    delete robotCatAdapter;
    delete robotCat;
}


