//
// Created by mikhail on 11.11.2019.
//

#ifndef PATTERNS_BUSINESSCLASSDECORATOR_H
#define PATTERNS_BUSINESSCLASSDECORATOR_H


#include "TicketDecorator.h"

class BusinessClassDecorator : public TicketDecorator {
public:
    BusinessClassDecorator(Ticket *ticket);

    int getCost() override;
};


#endif //PATTERNS_BUSINESSCLASSDECORATOR_H
