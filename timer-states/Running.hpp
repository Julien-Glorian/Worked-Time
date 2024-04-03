#ifndef WORKED_TIME_RUNNING_HPP
#define WORKED_TIME_RUNNING_HPP

#include "StateTimer.hpp"

class Running : public StateTimer {
public:
    void start() override;
    void seeTimer() override;
    void rest() override;
    void stop() override;
    void data() override;
    void edit() override;
    void exit() override;
};


#endif //WORKED_TIME_RUNNING_HPP
