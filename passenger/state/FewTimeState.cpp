//
// Created by mikhail on 18.12.2019.
//

#include "FewTimeState.h"

void FewTimeState::tryToVisitCommercial(Ticket *ticket) {
    logger->info("Нет времени куда либо идти");
}

FewTimeState::FewTimeState(IVisitingServices *visitingServices) : State(visitingServices) {
    this->logger = new Logger("FewTimeState");
}
