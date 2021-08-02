
#ifndef OBSERVER_PATTERN_ESPNDATA_H
#define OBSERVER_PATTERN_ESPNDATA_H

#include <vector>
#include <algorithm>
#include <iostream>
#include <string>


#include "Subject.h"
#include "Observer.h"

/**
 * A concrete implementation of the Subject interface
 */
class ESPNData : public Subject {
    
    std::vector<Observer *> observers; // observers need a list of them so we can update

    std::string team_name = "";
    int score = 0;
    float win_percent = 0.0f;

public:

    void registerObserver(Observer *observer) override;

    void removeObserver(Observer *observer) override;

    void notifyObservers() override;

    /**
     * Set the new state of the ESPN App station
     */
    void setState(std::string team_name, int score, float win_percent);

};

#endif 


