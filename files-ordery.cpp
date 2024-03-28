#include "files-ordery.hpp"

const std::string SUBJECT_WORD("Which subject correspond to your time worked, without space please and 30 characters max ?");
const std::string SUBJECT_TOO_LONG("The subject is too long.");

const std::string FILE_NAME_SAVE("worked-time.txt");

void save_time_worked(unsigned int nbSecondsWorked) {
    std::string wordSubject;
    std::cout << SUBJECT_WORD << std::endl;
    std::getline(std::cin, wordSubject);
    while (wordSubject.size() > 30) {
        std::cout << wordSubject.size() << std::endl;
        std::cout << SUBJECT_TOO_LONG << std::endl;
        std::getline(std::cin, wordSubject);
    }

    std::vector<unsigned int> hoursMinutesSeconds = conversion_hours_minutes_seconds(nbSecondsWorked);
    std::string dateOfDate = date_of_day();

    std::ofstream fileTimeWorked(FILE_NAME_SAVE, std::ios_base::app);

    while (hoursMinutesSeconds[0] >= 9) {
        hoursMinutesSeconds[0] -= 9;
        std::vector<unsigned int> maxTime{9,0,0};
        std::string toWrite = dateOfDate + " " + to_string_timer(maxTime) + " " + wordSubject + "\n";
        fileTimeWorked << toWrite;
    }
    std::string toWrite = dateOfDate + " " + to_string_timer(hoursMinutesSeconds) + " " + wordSubject + "\n";
    fileTimeWorked << toWrite;

    fileTimeWorked.close();
}

std::string date_of_day() {
    time_t now = time(0);

    tm *localTime = localtime(&now);

    std::string dateOfDay;
    dateOfDay += std::to_string(1900 + localTime->tm_year) + "-";
    if (localTime->tm_mon < 9) {
        dateOfDay += "0";
    }
    dateOfDay += std::to_string(1 + localTime->tm_mon) + "-";
    if (localTime->tm_mday < 10) {
        dateOfDay += "0";
    }
    dateOfDay += std::to_string(localTime->tm_mday);

    return dateOfDay;
}