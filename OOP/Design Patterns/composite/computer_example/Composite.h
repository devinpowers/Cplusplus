
#ifndef COMPUTERSHOPCOMPOSITE_COMPONENT_H
#define COMPUTERSHOPCOMPOSITE_COMPONENT_H

#include "Component.h"
#include <vector>
#include <string>

using namespace std;

class Composite : virtual public Component{

    public:
        Composite(const string &name);

        void ShowDetails() override;
        void GetPrice() override;

    private:
        string name;
        std::vector<Component*> components;

};




#endif