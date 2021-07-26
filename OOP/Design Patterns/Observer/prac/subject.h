

#ifndef Observer_Pattern_Subject_H
#define Observer_Pattern_Subject_H
#include <vector>
using namespace std;
#include "observer.h"

class Subject {
    // 1. "independent" functionality
    vector < class Observer * > views; // 3. Coupled only to "interface"
    int value;
  public:
    void attach(Observer *obs) {
        views.push_back(obs);
    }
    void setVal(int val) {
        value = val;
        notify();
    }
    int getVal() {
        return value;
    }
    void notify();
};


#endif // Observer_Pattern_Subject_J