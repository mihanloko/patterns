//
// Created by mikhail on 30.10.2019.
//

#ifndef PATTERNS_FLIGHT_H
#define PATTERNS_FLIGHT_H

#include <vector>
#include <string>
#include <ctime>
#include "../passport_control/CheckHandler.h"
//#include "FlightVisitor.h"

using namespace std;

class CheckHandler;

class FlightVisitor;

/**
 * Авиарейс, абстрактный класс (уже нет, хотя в тоерии да)
 */
class Flight {
protected:
    string from;
    string to;
    time_t time;

public:

    Flight(const string &from, const string &to, time_t time);

    virtual CheckHandler *getChain();

    virtual time_t getTime();

    virtual string acceptVisitor(FlightVisitor *flightVisitor);

    virtual const string &getFrom() const;

    virtual const string &getTo() const;
};


#endif //PATTERNS_FLIGHT_H
