
#ifndef TACOBELL_H_
#define TACOBELL_H_

#include "TacoJoint.h"

class TacoBell : public TacoJoint {
    public:

        TacoBell();
        virtual ~TacoBell();

        virtual Taco * CreateTaco(std::string type);
};

#endif

