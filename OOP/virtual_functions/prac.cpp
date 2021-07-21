
#include<iostream>
using std::cout;
using std::endl;


class Instrument {
    public:
         
         virtual void MakeSound() = 0;
};

class Accordion:public Instrument {
    // dervied class
    public:
        void MakeSound()
        {
            cout << "Accordion is playing " << endl;
        }
};

class Guitar:public Instrument {
    // dervied class
    public:
    void MakeSound()
    {
        cout << "Slowy weeping my Guitar" << endl;
    }
};

class Piano:public Instrument {
    // dervied class
    public:
    void MakeSound()
    {
        cout << "Piano Playing...." << endl;
    }
};


int main()
{
    Instrument* i1 = new Accordion();

    Instrument* i2 = new Guitar();

    Instrument* i3 = new Piano();

    // We can make all the intruments play
    Instrument* instruments[3]= {i1, i2, i3};

    for(int i = 0; i <3; i++ )
    {
        instruments[i]-> MakeSound();
    }

}



