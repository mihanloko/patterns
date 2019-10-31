//
// Created by mikhail on 30.10.2019.
//

#include "Ticket.h"
#include "../flights/DomesticFlight.h"

Flight *Ticket::getFlight() const {
    return flight;
}

Ticket::Ticket() {
    vector<string> route;
    route.push_back("a");
    route.push_back("b");
    route.push_back("c");
    flight = new DomesticFlight(route);

}
