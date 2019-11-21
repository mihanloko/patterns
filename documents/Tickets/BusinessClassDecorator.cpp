//
// Created by mikhail on 11.11.2019.
//

#include "BusinessClassDecorator.h"

BusinessClassDecorator::BusinessClassDecorator(Ticket *ticket) : TicketDecorator(ticket) {

}

int BusinessClassDecorator::getCost() {
    return wrapped->getCost() * 3;
}
