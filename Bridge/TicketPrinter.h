//
// Created by mikhail on 26.11.2019.
//

#ifndef PATTERNS_TICKETPRINTER_H
#define PATTERNS_TICKETPRINTER_H


#include "IPrinter.h"

class TicketPrinter {
private:
    IPrinter *printer;

public:
    TicketPrinter();
    Ticket* bueTicket();

};


#endif //PATTERNS_TICKETPRINTER_H
