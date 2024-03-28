#include <iostream>
#include <list>
#include <string>
#include "tools-methods.hpp"
#include "files-ordery.hpp"

const std::string WELCOME("Welcome to Worked Time !\nBy Julien Glorian");
const std::string WHAT_WANT_YOU("What is your next instruction with this list of actions ?");
const std::string QUESTION_SAVE("Do you want to save your time worked ?");
const std::string GOODBYE("Goodbye ! Hoping to have helped !\nEnd of program Worked Time by Julien Glorian");

const std::string CALCULATE_TOTAL_TIME_WORKED("calculate total time worked");
const std::string STOP_PROGRAM("stop program");
const std::string START_TIMER("start timer");
const std::string WORD_NOT_RECOGNIZE("unrecognized word");
const std::string YES("Yes");
const std::string NO("No");

const std::list<std::string> HEAD_PROGRAM({START_TIMER, STOP_PROGRAM, CALCULATE_TOTAL_TIME_WORKED});
const std::list<std::string> YES_OR_NO({YES, NO});

int main()
{

    unsigned int nbSecondsWorked;

    std::cout << WELCOME << std::endl;
    std::string word;
    while (true) {
        std::cout << actions_build(HEAD_PROGRAM) << std::endl;
        std::getline(std::cin, word);
        if (word == START_TIMER)
        {
            nbSecondsWorked = timer();
        }
        else if (word == STOP_PROGRAM)
        {
            break;
        }
        else
        {
            std::cout << WORD_NOT_RECOGNIZE << std::endl;
        }
    }

    std::cout << QUESTION_SAVE << std::endl;
    while (true) {
        std::cout << actions_build(YES_OR_NO) << std::endl;
        std::getline(std::cin, word);
        if (word == YES) {

        } else if (word == NO) {
            break;
        } else {
            std::cout << WORD_NOT_RECOGNIZE << std::endl;
        }
    }
    std::cout << GOODBYE << std::endl;
}