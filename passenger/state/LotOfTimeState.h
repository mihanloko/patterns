//
// Created by mikhail on 18.12.2019.
//

#ifndef PATTERNS_LOTOFTIMESTATE_H
#define PATTERNS_LOTOFTIMESTATE_H


#include "State.h"

class LotOfTimeState : public State {
private:
    int delta = 0;
public:
    void tryToVisitCommercial(Ticket *ticket) override;

    LotOfTimeState(IVisitingServices *visitingServices);

};


#endif //PATTERNS_LOTOFTIMESTATE_H
