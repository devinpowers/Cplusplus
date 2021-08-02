
#ifndef OBSERVER_PATTERN_CLIENT_1_H
#define OBSERVER_PATTERN_CLIENT_1_H

#include <iostream>

#include "Observer.h"

/**
 * a client that implements the Observer interface
 */
class Client : public Observer {

    int id; // Label the Identification number of the Client

public:

    Client(int id);

    virtual void update(float temp, float humidity, float pressure) override;

};

#endif


