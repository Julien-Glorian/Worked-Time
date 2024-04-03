#include "StateTimer.hpp"

StateTimer::StateTimer(Timer* timer) {
    this->_timer = timer;
}

void StateTimer::start() {
    this->_timer->getLanguage()->unrecognizedInstruction();
}

void StateTimer::seeTimer() {
    this->_timer->getLanguage()->unrecognizedInstruction();
}

void StateTimer::rest() {
    this->_timer->getLanguage()->unrecognizedInstruction();
}

void StateTimer::stop() {
    this->_timer->getLanguage()->unrecognizedInstruction();
}

void StateTimer::data() {
    this->_timer->getLanguage()->unrecognizedInstruction();
}

void StateTimer::edit() {
    this->_timer->getLanguage()->unrecognizedInstruction();
}

void StateTimer::exit() {
    this->_timer->getLanguage()->unrecognizedInstruction();
}

StateTimer::~StateTimer() {}