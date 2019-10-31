//
// Created by mikhail on 31.10.2019.
//

#ifndef PATTERNS_LOGGER_H
#define PATTERNS_LOGGER_H

#include <iostream>
#include <string>

using  namespace std;

class Logger {
private:
    string className;
public:
    Logger(string className);
    void info(string message);
};


#endif //PATTERNS_LOGGER_H
