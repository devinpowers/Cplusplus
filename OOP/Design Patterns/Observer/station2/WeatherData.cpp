

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
        observer->update(temp, humidity, pressure);
    }
}

void WeatherData::setState(float temp, float humidity, float pressure) {
    this->temp = temp;
    this->humidity = humidity;
    this->pressure = pressure;
    std::cout << std::endl;
    notifyObservers();
}


