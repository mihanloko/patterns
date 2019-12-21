//
// Created by mikhail on 05.12.2019.
//

#ifndef PATTERNS_TICKETPOOL_H
#define PATTERNS_TICKETPOOL_H

#include <map>
#include <string>
#include "Ticket.h"

using namespace std;

class TicketPool {
private:
    static long long int idGenerator;
    vector<Ticket*> tickets;
    map<pair<string, pair<string, time_t>>, Flight*> flightsPool;

    class Memento {
    public:
        long long int idGenerator;
        vector<Ticket*> tickets;
        map<pair<string, pair<string, time_t>>, Flight*> flightsPool;

        Memento(long long int idGenerator, vector<Ticket*> tickets,
                map<pair<string, pair<string, time_t>>, Flight*> flightsPool) {
            this->idGenerator = idGenerator;
            this->flightsPool = flightsPool;
            this->tickets = tickets;
        }
    };

    Memento *memento = nullptr;

    void restore();
    void save();


public:
    Ticket* getTicket();
    void removeTicket(Ticket *ticket);

    void createTickets(int n, string from, string to, time_t time);


};

#endif //PATTERNS_TICKETPOOL_H
