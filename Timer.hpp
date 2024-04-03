#ifndef WORKED_TIME_TIMER_HPP
#define WORKED_TIME_TIMER_HPP

#include "languages/Language.hpp"
#include "timer-states/StateTimer.hpp"

class Timer {
private:
    Language* _language;
    StateTimer* _state;

public:
    Timer(Language* language, StateTimer* state);

    void setLanguage(Language* language);
    Language* getLanguage();
    void setState(StateTimer* state);

    ~Timer();
};


#endif //WORKED_TIME_TIMER_HPP
