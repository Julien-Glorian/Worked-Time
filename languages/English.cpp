#include <iostream>

#include "English.hpp"

void English::unrecognizedInstruction() {
    std::cout << "unrecognized instruction" << std::endl;
}

void English::timerStarted() {
    std::cout << "The timer started well." << std::endl;
}