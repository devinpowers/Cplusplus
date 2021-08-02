
#ifndef OBSERVER_PATTERN
#define OBSERVER_PATTERN

/**
 * Interface for the Observer
 */
class Observer {

public:
    /**
     * Update the state of this observer
     */

    virtual void update(std::string team_name, int score, float win_percent) = 0; // Virtual Function

};

#endif 


