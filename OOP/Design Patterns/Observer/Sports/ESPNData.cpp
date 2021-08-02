

#include "ESPNData.h"

void ESPNData::registerObserver(Observer *observer) {
    // Adds new observer to vector 
    observers.push_back(observer);
}

void ESPNData::removeObserver(Observer *observer) {
    // find the observer and remove it 
    auto iterator = std::find(observers.begin(), observers.end(), observer);

    if (iterator != observers.end()) { // observer found
        observers.erase(iterator); // remove the observer
    }
}

void ESPNData::notifyObservers() {
    for (Observer *observer : observers) { // notify all observers
        observer->update(team_name, score, win_percent);
    }
}

void ESPNData::setState(std::string team_name, int score, float win_percent) {
    this->team_name = team_name;
    this->score = score;
    this->win_percent = win_percent;
    std::cout << std::endl;
    notifyObservers();
}


