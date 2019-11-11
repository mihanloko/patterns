//
// Created by mikhail on 30.10.2019.
//

#include "Passenger.h"

Passenger::Passenger(IVisitingServices *iVisitingServices) {
    this->visitingServices = iVisitingServices;
    ticket = new Ticket();
}

void Passenger::visit() {
    visitingServices->visit(ticket);
}

map<string, Document *> Passenger::getDocuments() {
    return documents;
}
