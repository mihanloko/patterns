//
// Created by mikhail on 18.12.2019.
//

#include "LotOfTimeState.h"
#include "FewTimeState.h"

void LotOfTimeState::tryToVisitCommercial(Ticket *ticket) {
    time_t remind = ticket->getFlightTime() - time(nullptr) - delta;
    if (remind > 60 * 20) {//20 minutes
        switch (rand() % 6) {
            case 0:
                logger->info("Схожу в банк");
                delta += 60 * 20;
                break;
            case 1:
                logger->info("Схожу в кафе");
                delta += 60 * 20;
                break;
            case 2:
                logger->info("Схожу в комнату ожидания");
                delta += 60 * 20;
                break;
            default:
                logger->info("Не пойду никуда");
        }
    }
    else {
        visitingServices->setState(new FewTimeState(visitingServices));
    }

}

LotOfTimeState::LotOfTimeState(IVisitingServices *visitingServices) : State(visitingServices) {
    this->logger = new Logger("LotOfTimeState");
}

