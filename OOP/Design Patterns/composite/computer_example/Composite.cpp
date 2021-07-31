
#include "Composite.h"

// Constructor
Composite::Composite(const string &name ) : name(name) {}

void Composite::ShowDetails(){

    cout << "===============================" << endl;
    cout << name << endl;
    cout << "===============================" << endl;

    for (Component *comp: components) {
        comp->ShowDetails();
    }

}


void Composite::GetPrice(){
    double total = 0;
    
    for (Component *comp: components){
        total += comp->GetPrice();
    }
    return total;
}

void Composite::AddComponent(Component *component){

    components.emplace_back(component);
}