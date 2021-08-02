

#include "Client.h"

void Client::update(std::string team_name, int score, float win_percent) {
    // print the changed values
    std::cout << "---Client (" << id << ") Data---\tTeam Name: " << team_name
              << "\tScore: " << score
              << "\tWin Percentage: " << win_percent
              << std::endl;
}

Client::Client(int id) {
    this->id = id;
}


