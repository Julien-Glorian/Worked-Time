#ifndef WORKED_TIME_LANGUAGE_HPP
#define WORKED_TIME_LANGUAGE_HPP


class Language {
public:
    virtual void unrecognizedInstruction() = 0;
    virtual void timerStarted() = 0;

    virtual ~Language();
};


#endif //WORKED_TIME_LANGUAGE_HPP
