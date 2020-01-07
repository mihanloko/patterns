//
// Created by mikhail on 21.12.2019.
//

#ifndef PATTERNS_FLIGHTVISITOR_H
#define PATTERNS_FLIGHTVISITOR_H

#include <string>
#include "DirectFlight.h"
#include "TransferFlight.h"

using namespace std;

class DirectFlight;

class TransferFlight;

class FlightVisitor {
public:
    virtual string visitDirectFlight(DirectFlight *directFlight) = 0;

    virtual string visitTransferFlight(TransferFlight *transferFlight) = 0;
};


#endif //PATTERNS_FLIGHTVISITOR_H
