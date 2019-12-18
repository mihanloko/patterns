//
// Created by mikhail on 04.11.2019.
//

#ifndef PATTERNS_BOARDINGPROXY_H
#define PATTERNS_BOARDINGPROXY_H


#include "CompulsoryService.h"
#include "PlaceOfBoarding.h"
#include "../Logger.h"

class BoardingProxy : public CompulsoryService {
private:
    PlaceOfBoarding *placeOfBoarding;
    Logger *logger = new Logger("BoardingProxy");

    bool checkDocuments(Passenger *passenger);

public:
    bool serve(Passenger *passenger) override;
};


#endif //PATTERNS_BOARDINGPROXY_H
