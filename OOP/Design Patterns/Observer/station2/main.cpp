
#include <iostream>
#include "WeatherData.h"
#include "Client.h"


int main() {
    WeatherData weatherStation;
    Client one(1), two(2), three(3), four(4), five(5);

    float temp, humidity, pressure;

    weatherStation.registerObserver(&one);
    weatherStation.registerObserver(&two);
    weatherStation.registerObserver(&three);
    weatherStation.registerObserver(&four);
    weatherStation.registerObserver(&five);


    std::cout << "Enter Temperature, Humidity, Pressure (seperated by spaces) << ";
    std::cin >> temp >> humidity >> pressure;

    weatherStation.setState(temp,humidity,pressure);

    weatherStation.removeObserver(&two); // Remove from 

    std::cout << "\n\nEnter Temperature, Humidity, Pressure (seperated by spaces) << ";
    std::cin >> temp >> humidity >> pressure;

    weatherStation.setState(temp,humidity,pressure);

}

