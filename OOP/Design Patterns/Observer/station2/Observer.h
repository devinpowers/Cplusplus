
#ifndef OBSERVER_PATTERN
#define OBSERVER_PATTERN

/**
 * Interface for the Observer
 */
class Observer {

public:

    virtual void update(float temp, float humidity, float pressure, float wind) = 0; // Virtual Function

};

#endif 


