#include "Timer.hpp"

Timer::Timer(Language *language, StateTimer* state) {
    this->_language = language;

}

void Timer::setLanguage(Language *language) {
    delete(this->_language);
    this->_language = language;
}

Language* Timer::getLanguage() {
    return this->_language;
}

void Timer::setState(StateTimer *state) {
    delete(this->_state);
    this->_state = state;
}

Timer::~Timer() {
    delete(this->_language);
    delete(this->_state);
}