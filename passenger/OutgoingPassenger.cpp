//
// Created by mikhail on 30.10.2019.
//

#include "OutgoingPassenger.h"
#include "state/LotOfTimeState.h"
#include "../compulsory/CompulsoryService.h"

void OutgoingPassenger::visit(Ticket* ticket, Terminal *terminal, Passenger *passenger) {
    bool f = true;
    for (auto i = terminal->getCompulsoryServices()->getForwardIterator(); i->hasNext() && f; ) {
        f &= i->getNext()->serve(passenger);
        if (f) state->tryToVisitCommercial(ticket);
    }
}

OutgoingPassenger::OutgoingPassenger() {
    this->state = new LotOfTimeState((IVisitingServices*)this);
}
