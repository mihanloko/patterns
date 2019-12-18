//
// Created by mikhail on 18.12.2019.
//

#include "State.h"

State::State(IVisitingServices *visitingServices) {
    this->visitingServices = visitingServices;
}

void State::setVisitingServices(IVisitingServices *visitingServices) {
    this->visitingServices = visitingServices;
}

