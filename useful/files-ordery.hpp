#ifndef __WORKED_TIME_FILES_HPP__
#define __WORKED_TIME_FILES_HPP__

#include <string>
#include <fstream>
#include <chrono>
#include <ctime>
#include "tools-methods.hpp"

std::string date_of_day();
void save_time_worked(unsigned int nbSecondsWorked);

#endif
