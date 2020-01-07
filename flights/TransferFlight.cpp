//
// Created by mikhail on 21.12.2019.
//

#include "TransferFlight.h"

TransferFlight::TransferFlight(const string &from, const string &to, time_t time, const string &transfer)
        : Flight(from, to, time) {
    this->transfer = transfer;
}

const string &TransferFlight::getTransfer() const {
    return transfer;
}

string TransferFlight::acceptVisitor(FlightVisitor *flightVisitor) {
    return flightVisitor->visitTransferFlight(this);
}
