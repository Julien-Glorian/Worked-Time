#include "files-ordery.hpp"

const std::string SUBJECT_SAVE("Which subject correspond to your time worked ?");

const std::string FILE_NAME_SAVE("worked-time.txt");

void save_time_worked(unsigned int nbSecondsWorked) {

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