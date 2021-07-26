// CPP program to demonstrate 
// Decorator pattern
#include <iostream>
#include <string>
using namespace std;
  
// Component 
class MilkShake
{
public:
    virtual string Serve() = 0;
    virtual float price() = 0;
};
  
  
// Concrete Component  
class BaseMilkShake : public MilkShake
{
public:
    string Serve()
    {
        return "MilkShake";
    }
  
    float price()
    {
        return 30;
    }
};
  
// Decorator 
class MilkShakeDecorator: public MilkShake
{
protected:
    MilkShake *m_MilkShake;
public:
  
    MilkShakeDecorator(MilkShake *baseMilkShake): m_MilkShake(baseMilkShake){}
  
    string Serve()
    {
        return m_MilkShake->Serve();
    }
  
    float price()
    {
        return m_MilkShake->price();
    }
};
  
  
// Concrete Decorator 
class MangoMilkShake: public MilkShakeDecorator
{
public:
    MangoMilkShake(MilkShake *baseMilkShake): MilkShakeDecorator(baseMilkShake){}
  
    string Serve()
    {
        return m_MilkShake->Serve() + " decorated with Mango ";
    }
    float price()
    {
        return m_MilkShake->price() + 40;
    }
};
  
  
class VanillaMilkShake: public MilkShakeDecorator
{
public:
    VanillaMilkShake(MilkShake *baseMilkShake): MilkShakeDecorator(baseMilkShake){}
  
    string Serve()
    {
        return m_MilkShake->Serve() + " decorated with Vanilla ";
    }
    float price()
    {
        return m_MilkShake->price() + 80;
    }
};
  
int main()
{
  MilkShake *baseMilkShake = new BaseMilkShake();
  cout << "Basic Milk shake \n";
  cout << baseMilkShake -> Serve() << endl;
  cout << baseMilkShake -> price() << endl;    
  
  MilkShake *decoratedMilkShake = new MangoMilkShake(baseMilkShake);
  cout << "Mango decorated Milk shake \n";
  cout << decoratedMilkShake -> Serve() << endl;
  cout << decoratedMilkShake -> price() << endl;    
      
  delete decoratedMilkShake;
  
  decoratedMilkShake = new VanillaMilkShake(baseMilkShake);
  cout << "Vanilla decorated Milk shake \n";
  cout << decoratedMilkShake -> Serve() << endl;
  cout << decoratedMilkShake -> price() << endl;    
  
 delete decoratedMilkShake;
 delete baseMilkShake;
return 0;
} 


