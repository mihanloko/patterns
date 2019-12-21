//
// Created by mikhail on 21.12.2019.
//

#include "DirectFlight.h"

string DirectFlight::acceptVisitor(FlightVisitor *flightVisitor) {
    return flightVisitor->visitDirectFlight(this);
}

DirectFlight::DirectFlight(const string &from, const string &to, time_t time) : Flight(from, to, time) {}
