//
// Created by mikhail on 30.10.2019.
//

#include "IncomingPassenger.h"
#include "state/LotOfTimeState.h"
#include "../compulsory/CompulsoryService.h"

void IncomingPassenger::visit(Ticket *ticket, Terminal *terminal, Passenger *passenger) {
    bool f = true;
    for (auto i = terminal->getCompulsoryServices()->getBackwardIterator(); i->hasNext() && f;) {
        f &= i->getNext()->serve(passenger);
    }
}
