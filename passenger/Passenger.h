//
// Created by mikhail on 30.10.2019.
//

#ifndef PATTERNS_PASSENGER_H
#define PATTERNS_PASSENGER_H

#include <map>
#include <string>

#include "../documents/Document.h"
#include "IVisitingServices.h"
#include "../documents/DocumentAdapter.h"
#include "../documents/Tickets/Ticket.h"
#include "../terminal/Terminal.h"

class Ticket;
class IVisitingServices;
class Flight;

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
    void visit(Terminal *terminal);

    map<string, Document *> getDocuments();

    Flight *getFlight();

    DocumentAdapter *getPassport();
    DocumentAdapter *getVisa();
    DocumentAdapter *getInternationalPassport();
};


#endif //PATTERNS_PASSENGER_H
