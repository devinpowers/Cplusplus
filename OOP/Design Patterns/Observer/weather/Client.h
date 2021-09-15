
#ifndef OBSERVER_PATTERN_CLIENT_1_H
#define OBSERVER_PATTERN_CLIENT_1_H

#include <iostream>
#include "Observer.h"

class Client : public Observer {

private:
    int id; // Label the Identification number of the Client

public:

    Client(int id);

   // virtual void update(float temp, float humidity, float pressure);
    virtual void update(float temp, float humidity, float pressure) override;


};

void Client::update(float temp, float humidity, float pressure) {
    // print the changed values
    std::cout << "---Client (" << id << ") Data---\tTemperature: " << temp
              << "\tHumidity: " << humidity
              << "\tPressure: " << pressure
              << std::endl;
}

Client::Client(int id) {
    this->id = id;

}
#endif //OBSERVER_PATTERN_CLIENT_1_H



