#ifndef WORKED_TIME_HOME_HPP
#define WORKED_TIME_HOME_HPP

#include "StateTimer.hpp"
#include "Running.hpp"

class Home : public StateTimer{
public:
    void start() override;
    void seeTimer() override;
    void rest() override;
    void stop() override;
    void data() override;
    void edit() override;
    void exit() override;
};

#endif