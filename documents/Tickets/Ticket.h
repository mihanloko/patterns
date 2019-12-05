//
// Created by mikhail on 30.10.2019.
//

#ifndef PATTERNS_TICKET_H
#define PATTERNS_TICKET_H

#include "../Document.h"
#include "../../flights/Flight.h"

/**
 * Билет на рейс
 */
class Ticket : public Document {
protected:
    Flight* flight;
    int cost;
    int allowedCargo;
    int seatId;
    long long int id;
public:
    Flight *getFlight() const;
    Ticket();

    virtual int getCost();

    virtual int getAllowedCargo();
};


#endif //PATTERNS_TICKET_H
