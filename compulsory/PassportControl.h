//
// Created by mikhail on 12.11.2019.
//

#ifndef PATTERNS_PASSPORTCONTROL_H
#define PATTERNS_PASSPORTCONTROL_H


#include "CompulsoryService.h"

class PassportControl : public CompulsoryService {
public:
    void serve(Passenger *passenger);

    PassportControl(int priority);
};


#endif //PATTERNS_PASSPORTCONTROL_H
