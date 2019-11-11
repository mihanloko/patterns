//
// Created by mikhail on 30.10.2019.
//

#ifndef PATTERNS_PASSENGER_H
#define PATTERNS_PASSENGER_H

#include <map>
#include <string>

#include "../documents/Document.h"
#include "IVisitingServices.h"

using namespace std;

/**
 * Класс, описывающий пассажира
 */
class Passenger {
private:
    map<string, Document*> documents;
    Ticket* ticket;
    IVisitingServices* visitingServices;
public:
    Passenger(IVisitingServices* iVisitingServices);
    void visit();

    map<string, Document *> getDocuments();
};


#endif //PATTERNS_PASSENGER_H
