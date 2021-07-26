
#ifndef OBSERVER_PATTERN_CLIENT_1_H
#define OBSERVER_PATTERN_CLIENT_1_H

#include <iostream>
#include "Observer.h"

class Client : public Observer {

private:
    int id; // Label the Identification number of the Client

public:

    Client(int id);

    virtual void update(float temp, float humidity, float pressure) override;

};

#endif //OBSERVER_PATTERN_CLIENT_1_H



