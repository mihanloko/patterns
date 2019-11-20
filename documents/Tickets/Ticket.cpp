//
// Created by mikhail on 30.10.2019.
//

#include "Ticket.h"
#include "../../flights/DomesticFlight.h"

Flight *Ticket::getFlight() const {
    return flight;
}

Ticket::Ticket() {
    vector<string> route;
    route.emplace_back("first service");
    route.emplace_back("second service");
    route.emplace_back("third service");
    flight = new DomesticFlight(route);

}

int Ticket::getCost() {
    return 100;
}

int Ticket::getAllowedCargo() {
    return 20;
}
