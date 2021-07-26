#ifndef __COFFEE_H__
#define __COFFEE_H__
 
 //coffee
#include "beverage.h"
 
 //Strong coffee 
class Espresso : public Beverage
{
 
public:
    Espresso();
    ~Espresso();
    virtual std::string getDescription() const override;
    virtual double cost() override;
};
 
 
 //black coffee
class HouseBlend : public Beverage
{
public:
    HouseBlend();
    ~HouseBlend();
    virtual std::string getDescription() const override;
    virtual double cost() override;
};
#endif