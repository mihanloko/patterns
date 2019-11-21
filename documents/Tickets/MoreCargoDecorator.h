//
// Created by mikhail on 11.11.2019.
//

#ifndef PATTERNS_MORECARGODECORATOR_H
#define PATTERNS_MORECARGODECORATOR_H


#include "TicketDecorator.h"

class MoreCargoDecorator : public TicketDecorator {
public:
    MoreCargoDecorator(Ticket *wrapped);

    int getAllowedCargo() override;
};


#endif //PATTERNS_MORECARGODECORATOR_H
