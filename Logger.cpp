//
// Created by mikhail on 31.10.2019.
//

#include "Logger.h"

Logger::Logger(string className) {
    this->className = className;
}

void Logger::info(string message) {
    cout << "[" << className << "] " << message << endl;
}
