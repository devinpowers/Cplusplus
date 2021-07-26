#include "condimentdecorator.h"
 
Mocha::Mocha(Beverage* beverage):m_beverage(beverage)
{
 
}
 
Mocha::~Mocha()
{
 
}
 
std::string Mocha::getDescription() const
{
    return m_beverage->getDescription() + ",Mocha";
}
 
double Mocha::cost()
{
    return m_beverage->cost() + .20;
}
 
Milk::Milk(Beverage* beverage):m_beverage(beverage)
{
 
}
 
Milk::~Milk()
{
 
}
 
std::string Milk::getDescription() const
{
    return m_beverage->getDescription() + ",Milk";
}
 
double Milk::cost()
{
    return m_beverage->cost() + .50;
}