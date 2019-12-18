//
// Created by mikhail on 30.10.2019.
//

#include "Flight.h"
#include "../passport_control/PassportCheck.h"

const vector<string> &Flight::getRoute() const {
    return route;
}

Flight::Flight(const string &from, const string &to, time_t time) :
        from(from), to(to),
        time(time) {}

CheckHandler *Flight::getChain() {
    return new PassportCheck();
}

time_t Flight::getTime() const {
    return time;
}
