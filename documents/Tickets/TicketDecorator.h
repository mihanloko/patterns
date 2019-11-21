//
// Created by mikhail on 11.11.2019.
//

#ifndef PATTERNS_TICKETDECORATOR_H
#define PATTERNS_TICKETDECORATOR_H


#include "Ticket.h"

class TicketDecorator : public Ticket {
protected:
    Ticket *wrapped;
public:
    TicketDecorator(Ticket *wrapped);

    int getCost() override;

    int getAllowedCargo() override;
};


#endif //PATTERNS_TICKETDECORATOR_H
