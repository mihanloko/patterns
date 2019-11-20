//
// Created by mikhail on 30.10.2019.
//

#ifndef PATTERNS_IVISITINGSERVICES_H
#define PATTERNS_IVISITINGSERVICES_H

#include "../documents/Tickets/Ticket.h"

/**
 * Интерфейс поведения пассажира в аэропорту
 */
class IVisitingServices {
public:
    virtual void visit(Ticket* ticket) = 0;
};


#endif //PATTERNS_IVISITINGSERVICES_H
