//
// Created by mikhail on 21.12.2019.
//

#ifndef PATTERNS_SIMPLEFLIGHTVISITOR_H
#define PATTERNS_SIMPLEFLIGHTVISITOR_H


#include "FlightVisitor.h"
#include "DirectFlight.h"
#include "TransferFlight.h"

class SimpleFlightVisitor : public FlightVisitor {
public:
    string visitDirectFlight(DirectFlight *directFlight) override;

    string visitTransferFlight(TransferFlight *transferFlight) override;
};


#endif //PATTERNS_SIMPLEFLIGHTVISITOR_H
