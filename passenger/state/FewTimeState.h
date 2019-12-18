//
// Created by mikhail on 18.12.2019.
//

#ifndef PATTERNS_FEWTIMESTATE_H
#define PATTERNS_FEWTIMESTATE_H


#include "State.h"

class FewTimeState : public State {
public:
    void tryToVisitCommercial(Ticket *ticket) override;

    FewTimeState(IVisitingServices *visitingServices);
};


#endif //PATTERNS_FEWTIMESTATE_H
