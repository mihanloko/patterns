//
// Created by mikhail on 30.10.2019.
//

#include "Flight.h"

const vector<string> &Flight::getRoute() const {
    return route;
}

Flight::Flight(const string &from, const string &to, time_t time) :
        from(from), to(to),
        time(time) {}
