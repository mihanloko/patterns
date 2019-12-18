//
// Created by mikhail on 18.12.2019.
//

#ifndef PATTERNS_STATE_H
#define PATTERNS_STATE_H


#include "../IVisitingServices.h"

class Logger;
class Ticket;
class CompulsoryService;
class IVisitingServices;

class State {
protected:
    IVisitingServices* visitingServices;
    Logger *logger;
public:
    State(IVisitingServices *visitingServices);
    virtual void tryToVisitCommercial(Ticket* ticket) = 0;

    void setVisitingServices(IVisitingServices *visitingServices);
};


#endif //PATTERNS_STATE_H
