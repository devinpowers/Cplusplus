
#ifndef OBSERVER_PATTERN_WEATHERDATA_H
#define OBSERVER_PATTERN_WEATHERDATA_H

#include <vector>
#include <algorithm>
#include <iostream>

#include "Subject.h"
#include "Observer.h"


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

#endif //OBSERVER_PATTERN_WEATHERDATA_H


