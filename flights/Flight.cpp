//
// Created by mikhail on 30.10.2019.
//

#include "Flight.h"
#include "../passport_control/PassportCheck.h"
#include "../passport_control/InternationalPassportCheck.h"
#include "../passport_control/VisaCheck.h"

Flight::Flight(const string &from, const string &to, time_t time) :
        from(from), to(to),
        time(time) {}

CheckHandler *Flight::getChain() {
    return new PassportCheck(new InternationalPassportCheck(new VisaCheck()));
}

time_t Flight::getTime() {
    return time;
}

string Flight::acceptVisitor(FlightVisitor *flightVisitor) {
    return "";
}

const string &Flight::getFrom() const {
    return from;
}

const string &Flight::getTo() const {
    return to;
}
