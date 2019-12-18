//
// Created by mikhail on 12.11.2019.
//

#ifndef PATTERNS_BAGGAGESERVICE_H
#define PATTERNS_BAGGAGESERVICE_H


#include "CompulsoryService.h"

class BaggageService : public CompulsoryService {
public:
    bool serve(Passenger *passenger) override;

    BaggageService(int priority);
};


#endif //PATTERNS_BAGGAGESERVICE_H
