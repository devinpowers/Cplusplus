
#include <iostream>
#include "ESPNData.h"
#include "Client.h"
#include <string>
using std::string;

int main() {
    ESPNData weatherStation;
    Client one(1), two(2), three(3), four(4), five(5);

    string team_name;
    int score;
    float win_percent;

    weatherStation.registerObserver(&one);
    weatherStation.registerObserver(&two);
    weatherStation.registerObserver(&three);
    weatherStation.registerObserver(&four);
    weatherStation.registerObserver(&five);


    std::cout << "Enter Team Name, score, win_percent (seperated by spaces) << ";
    std::cin >> team_name >> score >> win_percent;

    weatherStation.setState(team_name,score,win_percent);

    weatherStation.removeObserver(&two); // Remove from 

    std::cout << "\n\nEnter Team Name, score, win_percent (seperated by spaces) << ";
    std::cin >> team_name >> score >> win_percent;

    weatherStation.setState(team_name,score,win_percent);

}

