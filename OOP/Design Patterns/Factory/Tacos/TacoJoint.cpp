
#include "TacoJoint.h"

#include "taco.h"


TacoJoint::TacoJoint() {}

TacoJoint::~TacoJoint(){}


Taco * TacoJoint::OrderTaco(std::string type)
{
        Taco * taco = CreateTaco(type);

        taco->Cook();
        taco->Prepare();
        taco->Wrap();

        return taco;
}