
#include "tacobelldoritos.h"

// Constructor

TacoBellDoritos::TacoBellDoritos() {
    t_name = std::string("Taco Bell Doriotos Taco ");
    t_shell = std::string("Hard Shell");
    t_meat = std:: string("Chicken");
    // Toppings
    t_toppings.push_back("Cheese");
    t_toppings.push_back("Gauc");
    t_toppings.push_back("Lettuce");
    t_toppings.push_back("Sour Cream");
}

TacoBellDoritos::~TacoBellDoritos() {}