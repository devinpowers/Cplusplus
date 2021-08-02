

#include "WeatherData.h"

void WeatherData::registerObserver(Observer *observer) {
    // Adds new observer to vector
    observers.push_back(observer);
}

void WeatherData::removeObserver(Observer *observer) {
    // find the observer and remove it 
    auto iterator = std::find(observers.begin(), observers.end(), observer);

    if (iterator != observers.end()) { // observer found
        observers.erase(iterator); // remove the observer
    }
}

void WeatherData::notifyObservers() {
    for (Observer *observer : observers) { // notify all observers
        observer->update(temp, humidity, pressure, wind);
    }
}

void WeatherData::setState(float temp, float humidity, float pressure, float wind) {
    this->temp = temp;
    this->humidity = humidity;
    this->pressure = pressure;
    this->wind = wind;
    std::cout << std::endl;
    notifyObservers();
}


