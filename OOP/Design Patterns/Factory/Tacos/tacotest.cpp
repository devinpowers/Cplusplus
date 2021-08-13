

#include "TacoBell.h"

#include "taco.h"

#include <iostream>

int main()
{

    TacoJoint * tacobell = new TacoBell();

    Taco * veggietaco = tacobell->OrderTaco(std::string("Veggie"));

    std::cout << "I just ordered a " << veggietaco->GetName() << std::endl;

    delete veggietaco;
    delete tacobell;

    TacoJoint * tacobell_ = new TacoBell();

    Taco * Doritostaco = tacobell_->OrderTaco(std::string("Doritos"));

    std::cout << "I just ordered a " << Doritostaco->GetName() << std::endl;

    delete Doritostaco;
    delete tacobell_;

    // Order a TacoBell Regular
    TacoJoint * tacobell_2 = new TacoBell();

    Taco * RegularTaco = tacobell_2->OrderTaco(std::string("Regular"));

    std::cout << "I just ordered a " << RegularTaco->GetName() << std::endl;

    delete RegularTaco;
    delete tacobell_2;


}