//
// Created by mikhail on 21.12.2019.
//

#ifndef PATTERNS_DIRECTFLIGHT_H
#define PATTERNS_DIRECTFLIGHT_H


#include "Flight.h"
#include "FlightVisitor.h"
#include <string>

using namespace std;

class FlightVisitor;
//class Flight;

class DirectFlight : public Flight {
public:
    string acceptVisitor(FlightVisitor *flightVisitor) override;

    DirectFlight(const string &from, const string &to, time_t time);
};


#endif //PATTERNS_DIRECTFLIGHT_H
