//
// Created by mikhail on 04.11.2019.
//

#ifndef PATTERNS_COMPULSORYSERVICE_H
#define PATTERNS_COMPULSORYSERVICE_H


#include "../passenger/Passenger.h"

class CompulsoryService {
public:
    virtual void serve(Passenger *passenger) = 0;
};


#endif //PATTERNS_COMPULSORYSERVICE_H
