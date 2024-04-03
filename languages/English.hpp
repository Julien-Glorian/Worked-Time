#ifndef WORKED_TIME_ENGLISH_HPP
#define WORKED_TIME_ENGLISH_HPP

#include "Language.hpp"
#include <iostream>


class English : public Language {
public:
    void unrecognizedInstruction() override;
    void timerStarted() override;
};


#endif //WORKED_TIME_ENGLISH_HPP
