//
// Created by mikhail on 11.11.2019.
//

#include "MoreCargoDecorator.h"

MoreCargoDecorator::MoreCargoDecorator(Ticket *wrapped) : TicketDecorator(wrapped) {

}

int MoreCargoDecorator::getAllowedCargo() {
    return wrapped->getAllowedCargo() * 2;
}
