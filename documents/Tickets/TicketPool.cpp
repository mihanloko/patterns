//
// Created by mikhail on 05.12.2019.
//

#include "TicketPool.h"

long long int TicketPool::idGenerator = 0;

Ticket *TicketPool::getTicket(long long int id) {
    return tickets[id];
}