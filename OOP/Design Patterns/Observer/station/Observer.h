
#ifndef OBSERVER_PATTERN
#define OBSERVER_PATTERN


class Observer {

public:
    virtual void update(float temp, float humidity, float pressure) = 0; // Virtual Function

};

#endif 

