#ifndef __BEVERAGE_H__
#define __BEVERAGE_H__
 
#include <string>
/*
   * Beverages 
*/
class Beverage
{
public:
    virtual std::string getDescription() const
    {
        return description;
    }
 
    virtual double cost() = 0;
 
public:
    std::string description = "Unknow Beverage";
};
#endif