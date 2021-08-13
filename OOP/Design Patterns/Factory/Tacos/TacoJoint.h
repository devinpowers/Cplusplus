
#ifndef TACOJOINT_H_
#define TACOJOINT_H_

#include <string>

class Taco;

class TacoJoint {
    public:

        TacoJoint();
        virtual ~TacoJoint();

        virtual Taco * CreateTaco(std::string type) = 0;

        virtual Taco * OrderTaco(std::string type);
};

#endif 



