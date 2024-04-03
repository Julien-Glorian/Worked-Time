#ifndef WORKED_TIME_STATETIMER_HPP
#define WORKED_TIME_STATETIMER_HPP

#include "../Timer.hpp"

class StateTimer {
protected:
    Timer* _timer;

public:
    StateTimer(Timer* timer);

    virtual void start();
    virtual void seeTimer();
    virtual void rest();
    virtual void stop();
    virtual void data();
    virtual void edit();
    virtual void exit();

    virtual ~StateTimer();
};


#endif //WORKED_TIME_STATETIMER_HPP
