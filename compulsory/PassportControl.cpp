//
// Created by mikhail on 12.11.2019.
//

#include "PassportControl.h"

PassportControl::PassportControl(int priority) : CompulsoryService(priority) {}

bool PassportControl::serve(Passenger *passenger) {
    Logger l("PassportControl");
    l.info("Served");
    return passenger->getFlight()->getChain()->handle(passenger);
}
