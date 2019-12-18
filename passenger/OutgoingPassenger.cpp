//
// Created by mikhail on 30.10.2019.
//

#include "OutgoingPassenger.h"
#include "state/LotOfTimeState.h"
#include "../compulsory/CompulsoryService.h"

void OutgoingPassenger::visit(Ticket* ticket, Terminal *terminal, Passenger *passenger) {
    for (auto i = terminal->getCompulsoryServices()->getForwardIterator(); i->hasNext(); ) {
        i->getNext()->serve(passenger);
        state->tryToVisitCommercial(ticket);
    }
}

OutgoingPassenger::OutgoingPassenger() {
    this->state = new LotOfTimeState((IVisitingServices*)this);
}
