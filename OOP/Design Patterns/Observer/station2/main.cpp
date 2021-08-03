
#include <iostream>
#include "WeatherData.h"
#include "Client.h"


int main() {

    WeatherData weatherStation;
    Client one(1), two(2), three(3), four(4), five(5);

    float temp, humidity, pressure, wind;

    // Pass Clients to the WeatherStation
    weatherStation.registerObserver(&one);
    weatherStation.registerObserver(&two);
    weatherStation.registerObserver(&three);
    weatherStation.registerObserver(&four);
    weatherStation.registerObserver(&five);


    std::cout << "Enter Temperature, Humidity, Pressure, Wind (seperated by spaces) << ";
    std::cin >> temp >> humidity >> pressure >> wind;

    // Set 'currrent' state 
    weatherStation.setState(temp,humidity,pressure, wind);

    // Remove an Obsever
    weatherStation.removeObserver(&two); // Remove from 

    std::cout << "\n\nEnter Temperature, Humidity, Pressure, Wind (seperated by spaces) << ";
    std::cin >> temp >> humidity >> pressure >> wind;

    // Set 'currrent' state
    weatherStation.setState(temp,humidity,pressure,wind);

}


