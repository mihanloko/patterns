//
// Created by mikhail on 30.10.2019.
//

#ifndef PATTERNS_IVISITINGSERVICES_H
#define PATTERNS_IVISITINGSERVICES_H

#include "../documents/Tickets/Ticket.h"
#include "state/State.h"

class Ticket;
class Terminal;
class State;
class Passenger;

/**
 * Интерфейс поведения пассажира в аэропорту
 */
class IVisitingServices {
protected:
    State *state;
public:
    virtual void visit(Ticket* ticket, Terminal *terminal, Passenger *passenger) = 0;

    void setState(State *state);
};


#endif //PATTERNS_IVISITINGSERVICES_H
