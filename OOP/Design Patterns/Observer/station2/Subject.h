
#ifndef OBSERVER_PATTERN_SUBJECT_H
#define OBSERVER_PATTERN_SUBJECT_H


#include "Observer.h"

/**
 * Interface for the Subject
 */
class Subject {

public:

    virtual void registerObserver(Observer *observer) = 0;

    virtual void removeObserver(Observer *observer) = 0;

    virtual void notifyObservers() = 0;

};

#endif 

