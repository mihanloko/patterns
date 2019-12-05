//
// Created by mikhail on 04.11.2019.
//

#ifndef PATTERNS_PLACEOFBOARDING_H
#define PATTERNS_PLACEOFBOARDING_H


#include "CompulsoryService.h"

class PlaceOfBoarding : public CompulsoryService {
public:
    void serve(Passenger *passenger) override;

    PlaceOfBoarding(int priority);
};


#endif //PATTERNS_PLACEOFBOARDING_H
