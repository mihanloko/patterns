//
// Created by mikhail on 05.12.2019.
//

#ifndef PATTERNS_TICKETPOOL_H
#define PATTERNS_TICKETPOOL_H

#include <map>
#include "Ticket.h"

using namespace std;

class TicketPool {
private:
    static long long int idGenerator;
    map<long long int, Ticket*> tickets;

public:
    Ticket* getTicket(long long int id);

    void createTickets(int n, );

};

#endif //PATTERNS_TICKETPOOL_H
