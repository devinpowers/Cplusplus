#ifndef __CONDIMENTDECORATOR_H__
#define __CONDIMENTDECORATOR_H__
 
#include <string>
 
#include "beverage.h"
 
 / / seasoning decoration class
class CondimentDecorator : public Beverage
{
public:
    virtual std::string getDescription() const override = 0;
    virtual double cost() override = 0;
};
 
 / / seasoning - Mocha
class Mocha : public CondimentDecorator
{
public:
    explicit Mocha(Beverage* beverage);
    ~Mocha();
    virtual std::string getDescription() const override;
    virtual double cost() override;
 
private:
    Beverage* m_beverage;
};
 
 / / seasoning - milk
class Milk : public CondimentDecorator
{
public:
    explicit Milk(Beverage* beverage);
    ~Milk();
    virtual std::string getDescription() const override;
    virtual double cost() override;
 
private:
    Beverage* m_beverage;
 
};
 
#endif