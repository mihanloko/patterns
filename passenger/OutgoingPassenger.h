//
// Created by mikhail on 30.10.2019.
//

#ifndef PATTERNS_OUTGOINGPASSENGER_H
#define PATTERNS_OUTGOINGPASSENGER_H

#include <string>
#include <iostream>

#include "IVisitingServices.h"
#include "../Logger.h"

class IVisitingServices;

using namespace std;

/**
 * Класс, описывающий поведение пассажира, который пришел в аэропорт и собирается лететь
 */
class OutgoingPassenger : public IVisitingServices {
private:
    Logger* logger = new Logger("OutgoingPassenger");
public:
    void visit(Ticket* ticket, Terminal *terminal, Passenger *passenger) override;

    OutgoingPassenger();
};


#endif //PATTERNS_OUTGOINGPASSENGER_H
