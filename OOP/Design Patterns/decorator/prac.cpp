#include <iostream>
using namespace std;

class IBackpack 
{
public:
  virtual void assemble() = 0;
  virtual ~IBackpack() {}
};

class PlainBackpack: public IBackpack 
{
public:
  virtual void assemble(){cout<<"\n ShoulderStraps and mainCompartment";}
};

class BackpackDecorator: public IBackpack
{
public:
  BackpackDecorator(IBackpack* decorator):m_Decorator(decorator) {}
  
  virtual void assemble() 
  {
    m_Decorator->assemble();
  }
private:
  IBackpack* m_Decorator;
};

class WithLaptopSlot : public BackpackDecorator
{
public:
  WithLaptopSlot(IBackpack* dcrator):BackpackDecorator(dcrator){}
  virtual void assemble() 
  {
    BackpackDecorator::assemble();
    cout << " + LaptopSlot";
  }
};
 
class WithUSBCharge : public BackpackDecorator
{
public:
    WithUSBCharge(IBackpack* dcrator):BackpackDecorator(dcrator){}
    virtual void assemble() 
    {
        BackpackDecorator::assemble();
        cout << " + USBCharge";
    }
};
 
class WithWaterBottle : public BackpackDecorator
{
public:
    WithWaterBottle(IBackpack* dcrator):BackpackDecorator(dcrator){}
    virtual void assemble() 
    {
        BackpackDecorator::assemble();
        cout << " + WaterBottle";
    }
};


int main()
{
  IBackpack* pBackpack = 
   new WithWaterBottle(        //5
    new WithUSBCharge(         //4
     new WithLaptopSlot(       //3
      new BackpackDecorator(   //2
       new PlainBackpack()))));//1

  pBackpack->assemble();
  delete pBackpack;

    cout << endl;
}
