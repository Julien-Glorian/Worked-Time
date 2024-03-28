#ifndef __WORKED_TIME_TOOLS_METHODS_HPP__
#define __WORKED_TIME_TOOLS_METHODS_HPP__

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <chrono>

std::string actions_build(const std::list<std::string>& actions);
unsigned int timer();
std::vector<unsigned int> conversion_hours_minutes_seconds(const unsigned int& nbSeconds);
std::string to_string_timer(const std::vector<unsigned int>& timer);

#endif