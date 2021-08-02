
#ifndef OBSERVER_PATTERN_CLIENT_H
#define OBSERVER_PATTERN_CLIENT_H

#include <iostream>
#include <string>

#include "Observer.h"

/**
 * a client that implements the Observer interface
 */
class Client : public Observer {

    int id; // Label the Identification number of the Client

public:

    Client(int id);

    virtual void update(std::string team_name, int score, float win_percent) override;

};

#endif


