#include "tacobellveggie.h"

TacoBellVeggie::TacoBellVeggie() {
    t_name = std::string("Taco Bell Veggie Taco ");
    t_shell = std::string("Soft Shell");
    t_meat = std:: string("Tofu");
    // Toppings
    t_toppings.push_back("Cheese");
    t_toppings.push_back("Salsa");
    t_toppings.push_back("Peppers");
    t_toppings.push_back("Coby Jack Cheese");
    t_toppings.push_back("Gauc");
    t_toppings.push_back("Lettuce");
    t_toppings.push_back("Sour Cream");
}

TacoBellVeggie::~TacoBellVeggie() {}