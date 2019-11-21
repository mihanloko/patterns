//
// Created by mikhail on 11.11.2019.
//

#include "TicketDecorator.h"

TicketDecorator::TicketDecorator(Ticket *wrapped) {
    this->wrapped = wrapped;
}

int TicketDecorator::getAllowedCargo() {
    return wrapped->getAllowedCargo();
}

int TicketDecorator::getCost() {
    return wrapped->getCost();
}
