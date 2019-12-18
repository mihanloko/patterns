//
// Created by mikhail on 30.10.2019.
//

#include "Passenger.h"
#include "../documents/PassportAdapter.h"
#include "../documents/InternationalPassportAdapter.h"
#include "../documents/VisaAdapter.h"


Passenger::Passenger(IVisitingServices *iVisitingServices) {
    this->visitingServices = iVisitingServices;
    ticket = new Ticket();
}

void Passenger::visit(Terminal *terminal) {
    visitingServices->visit(ticket, terminal, this);
}

map<string, Document *> Passenger::getDocuments() {
    return documents;
}

Flight *Passenger::getFlight() {
    return ticket->getFlight();
}

DocumentAdapter *Passenger::getPassport() {
    return new PassportAdapter();
}

DocumentAdapter *Passenger::getVisa() {
    return new VisaAdapter();
}

DocumentAdapter *Passenger::getInternationalPassport() {
    return new InternationalPassportAdapter();
}
