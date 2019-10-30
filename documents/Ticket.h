//
// Created by mikhail on 30.10.2019.
//

#ifndef PATTERNS_TICKET_H
#define PATTERNS_TICKET_H

#include "Document.h"
#include "../flights/Flight.h"

/**
 * Билет на рейс
 */
class Ticket : public Document {
private:
    Flight* flight;
public:
    Flight *getFlight() const;
};


#endif //PATTERNS_TICKET_H
