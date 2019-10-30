//
// Created by mikhail on 30.10.2019.
//

#ifndef PATTERNS_INCOMINGPASSENGER_H
#define PATTERNS_INCOMINGPASSENGER_H

#include <vector>
#include <string>
#include <iostream>

#include "IVisitingServices.h"

using namespace std;

/**
 * Класс, описывающий поведение пассажира, прилитевшего в аэропорт
 */
class IncomingPassenger : public IVisitingServices {
public:
    void visit(Ticket* ticket) override;
};


#endif //PATTERNS_INCOMINGPASSENGER_H
