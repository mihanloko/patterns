//
// Created by mikhail on 30.10.2019.
//

#ifndef PATTERNS_TICKET_H
#define PATTERNS_TICKET_H

#include <ostream>
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

    Ticket(Flight *flight, int seatId, long long int id);

    virtual int getCost();

    virtual int getAllowedCargo();

    long long int getId() const;

    friend ostream &operator<<(ostream &os, const Ticket &ticket);
};


#endif //PATTERNS_TICKET_H
