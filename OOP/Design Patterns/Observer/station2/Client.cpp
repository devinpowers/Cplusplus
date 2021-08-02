

#include "Client.h"

void Client::update(float temp, float humidity, float pressure, float {
    // print the changed values
    std::cout << "---Client (" << id << ") Data---\tTemperature: " << temp
              << "\tHumidity: " << humidity
              << "\tPressure: " << pressure
              << "\tWind Speed (mph): " << wind 
              << std::endl;
}

Client::Client(int id) {
    // Set Client id
    this->id = id;
}


