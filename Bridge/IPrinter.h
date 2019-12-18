//
// Created by mikhail on 26.11.2019.
//

#ifndef PATTERNS_IPRINTER_H
#define PATTERNS_IPRINTER_H

#include <map>
#include "../flights/Flight.h"
#include "../documents/Tickets/Ticket.h"

using namespace std;

class IPrinter {
protected:
    map<long long int, Flight*> flightPull;
public:
    virtual Ticket *printTicket() = 0;

};


#endif //PATTERNS_IPRINTER_H
