

#ifndef TACO_H_
#define TACO_H_

#include <string>
#include <vector>

class Taco {

    protected:

        std::string t_name;
        std::string t_shell;
        std::string t_meat; // Meat
        std::vector<std::string> t_toppings; // Toppings that go ontop of our tacos
    
    public:

        Taco();

        virtual ~Taco();\
        std::string GetName()
        {
            return t_name;
        }

        void Cook(); // Cook Taco
        void Prepare(); // Prepare the Taco
        void Wrap();

};

#endif

