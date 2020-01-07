//
// Created by mikhail on 21.12.2019.
//

#include "SimpleFlightVisitor.h"

string SimpleFlightVisitor::visitDirectFlight(DirectFlight *directFlight) {
    string result = "Рейс из ";
    result += directFlight->getFrom();
    result += " до " + directFlight->getTo();
    time_t tt = directFlight->getTime();
    char *time = ctime(&tt);
    result += " отправляется в " + string(time);
    return result;
}

string SimpleFlightVisitor::visitTransferFlight(TransferFlight *transferFlight) {
    string result = "Рейс из ";
    result += transferFlight->getFrom();
    result += " до " + transferFlight->getTo();
    result += " с пересадкой в " + transferFlight->getTransfer();
    time_t tt = transferFlight->getTime();
    char *time = ctime(&tt);
    result += " отправляется в " + string(time);
    return result;
}
