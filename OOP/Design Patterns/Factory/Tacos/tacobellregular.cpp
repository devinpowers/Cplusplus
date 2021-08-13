


#include "tacobellregular.h"

// Constructor

TacoBellRegular::TacoBellRegular() {
    t_name = std::string("Taco Bell Regular Taco ");
    t_shell = std::string("Soft Shell");
    t_meat = std:: string("Steak");
    // Toppings
    t_toppings.push_back("Goat Cheese");
    t_toppings.push_back("Salsa");
    t_toppings.push_back("Cheese");
    t_toppings.push_back("Lettuce");
    t_toppings.push_back("Sour Cream");
}

TacoBellRegular::~TacoBellRegular() {}

