//
// Created by mikhail on 04.11.2019.
//

#include "PlaceOfBoarding.h"

bool PlaceOfBoarding::serve(Passenger *passenger) {
    return true;
}

PlaceOfBoarding::PlaceOfBoarding(int priority) : CompulsoryService(priority) {}
