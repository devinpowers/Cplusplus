
#ifndef OBSERVER_PATTERN_WEATHERDATA_H
#define OBSERVER_PATTERN_WEATHERDATA_H

#include <vector>
#include <algorithm>
#include <iostream>

//#include "Subject.h"
#include "Observer.h"


class Subject {

    public:

        virtual void registerObserver(Observer *observer) = 0;

        virtual void removeObserver(Observer *observer) = 0;

        virtual void notifyObservers() = 0;

};


class WeatherData : public Subject {

        std::vector<Observer *> observers; // observers need a list of them so we can update
        float temp = 0.0f;
        float humidity = 0.0f;
        float pressure = 0.0f;

    public:

        void registerObserver(Observer *observer) override;

        void removeObserver(Observer *observer) override;

        void notifyObservers() override;

        void setState(float temp, float humidity, float pressure);

};

// Implementations

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

#endif //OBSERVER_PATTERN_WEATHERDATA_H


