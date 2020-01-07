//
// Created by mikhail on 21.12.2019.
//

#ifndef PATTERNS_TRANSFERFLIGHT_H
#define PATTERNS_TRANSFERFLIGHT_H


#include "Flight.h"
#include "FlightVisitor.h"
#include <string>

using namespace std;

class FlightVisitor;
//class Flight;

class TransferFlight : public Flight {
private:
    string transfer;

public:
    TransferFlight(const string &from, const string &to, time_t time, const string &transfer);

    const string &getTransfer() const;

    string acceptVisitor(FlightVisitor *flightVisitor) override;
};


#endif //PATTERNS_TRANSFERFLIGHT_H
