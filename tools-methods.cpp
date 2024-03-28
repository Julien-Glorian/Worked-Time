#include "tools-methods.hpp"

const std::string WHAT_WANT_YOU("What is your next instruction with this list of actions ?");
const std::string TIMER_STARTED("Timer successfully start !");

const std::string BEGIN_BREAK("begin break");
const std::string END_BREAK("end break");
const std::string SEE_TIMER("see timer");
const std::string STOP_TIMER("stop timer");
const std::string WORD_NOT_RECOGNIZE("unrecognized word");


const std::list<std::string> TIMER_PROGRAM({SEE_TIMER, BEGIN_BREAK, STOP_TIMER});
const std::list<std::string> BREAK({END_BREAK, STOP_TIMER});

std::string actions_build(const std::list<std::string>& actions)
{
    std::string actionsBuilder(WHAT_WANT_YOU);
    actionsBuilder += "\nActions : ";
    for (const std::string& action : actions) {
        actionsBuilder += action + " | ";
    }
    return actionsBuilder;
}

unsigned int timer() {
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();
    std::cout << TIMER_STARTED << std::endl;

    unsigned int nbSecondsBeforeBreak = 0;
    std::string word;

    while (true) {
        std::cout << actions_build(TIMER_PROGRAM) << std::endl;
        std::getline(std::cin, word);
        if (word == STOP_TIMER) {
            break;
        }
        else if (word == SEE_TIMER) {
            std::chrono::high_resolution_clock::time_point currentTime = std::chrono::high_resolution_clock::now();
            std::cout << "You've already worked " << to_string_timer(conversion_hours_minutes_seconds(
                    nbSecondsBeforeBreak + std::chrono::duration_cast<std::chrono::seconds>(currentTime - start).count())) << std::endl;
        } else if (word == BEGIN_BREAK) {
            std::chrono::high_resolution_clock::time_point currentTime = std::chrono::high_resolution_clock::now();
            nbSecondsBeforeBreak += std::chrono::duration_cast<std::chrono::seconds>(currentTime - start).count();
            std::string wordBreak;
            while(true) {
                std::cout << actions_build(BREAK) << std::endl;
                std::getline(std::cin, wordBreak);
                if (wordBreak == END_BREAK or wordBreak == STOP_TIMER) {
                    break;
                } else {
                    std::cout << WORD_NOT_RECOGNIZE << std::endl;
                }
            }
            start = std::chrono::high_resolution_clock::now();
            if (wordBreak == STOP_TIMER) {
                break;
            }
        } else {
            std::cout << WORD_NOT_RECOGNIZE << std::endl;
        }
    }

    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
    return std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() + nbSecondsBeforeBreak;
}

std::vector<unsigned int> conversion_hours_minutes_seconds(const unsigned int& nbSeconds) {
    unsigned int nbSecondsPassed = nbSeconds % 60;
    unsigned int nbMinutesPassed = nbSeconds / 60 % 60;
    unsigned int nbHoursPassed = nbSeconds / 3600;
    return {nbHoursPassed, nbMinutesPassed, nbSecondsPassed};
}

std::string to_string_timer(const std::vector<unsigned int>& timer) {
    std::string stringTimer;
    if (timer[0] < 10) {
        stringTimer += "0";
    }
    stringTimer += std::to_string(timer[0]) + "h-";
    if (timer[1] < 10) {
        stringTimer += "0";
    }
    stringTimer += std::to_string(timer[1]) + "m-";
    if (timer[2] < 10) {
        stringTimer += "0";
    }
    stringTimer += std::to_string(timer[2]) + "s";
    return stringTimer;
}