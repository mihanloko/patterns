//
// Created by mikhail on 30.10.2019.
//

#ifndef PATTERNS_FLIGHT_H
#define PATTERNS_FLIGHT_H

#include <vector>
#include <string>
#include <ctime>
#include "../passport_control/CheckHandler.h"

using namespace std;

class CheckHandler;

/**
 * Авиарейс, абстрактный класс
 */
class Flight {
protected:
    vector<string> route;
    string from;
    string to;
    time_t time;

public:
    const virtual vector<string> &getRoute() const;

    Flight(const string &from, const string &to, time_t time);

    virtual CheckHandler *getChain();

    time_t getTime() const;
};


#endif //PATTERNS_FLIGHT_H
