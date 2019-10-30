//
// Created by mikhail on 30.10.2019.
//

#ifndef PATTERNS_PASSENGER_H
#define PATTERNS_PASSENGER_H

#include <vector>

#include "../documents/Document.h"
#include "IVisitingServices.h"

using namespace std;

/**
 * Класс, описывающий пассажира
 */
class Passenger {
private:
    vector<Document> documents;
    IVisitingServices* visitingServices;
};


#endif //PATTERNS_PASSENGER_H
