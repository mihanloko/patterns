//
// Created by mikhail on 05.12.2019.
//

#include "TicketPool.h"

long long int TicketPool::idGenerator = 0;

Ticket *TicketPool::getTicket() {
    this->save();
    Ticket *ticket = nullptr;
    if (!tickets.empty()) {
        ticket = tickets.back();
        tickets.pop_back();
        Logger l("TicketPool");
        if (rand() % 10 == 0) {
            l.info("Не удалось получить билет, восстановить состояние");
            this->restore();
        } else {
            l.info("Билет получен удачно");
        }
    }
    return ticket;
}

void TicketPool::createTickets(int n, string from, string to, time_t time) {
    Flight *flight = flightsPool[make_pair(from, make_pair(to, timezone))];
    if (flight == nullptr) {
        flight = flightsPool[make_pair(from, make_pair(to, timezone))] = new Flight(from, to, time);
    }

    for (int i = 0; i < n; ++i) {
        Ticket *ticket = new Ticket(flight, i + 1, idGenerator++);
        tickets.push_back(ticket);
    }
}

void TicketPool::removeTicket(Ticket *ticket) {
    tickets.push_back(ticket);
}

void TicketPool::save() {
    this->memento = new Memento(idGenerator, tickets, flightsPool);
}

void TicketPool::restore() {
    if (memento != nullptr) {
        TicketPool::idGenerator = memento->idGenerator;
        this->tickets = memento->tickets;
        this->flightsPool = memento->flightsPool;
    }
}
