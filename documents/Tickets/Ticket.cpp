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

}

int Ticket::getCost() {
    return 100;
}

int Ticket::getAllowedCargo() {
    return 20;
}

Ticket::Ticket(Flight *flight, int seatId, long long int id) : flight(flight), seatId(seatId), id(id) {
    allowedCargo = 20;
    cost = 100;
}

long long int Ticket::getId() const {
    return id;
}

ostream &operator<<(ostream &os, const Ticket &ticket) {
    os << "flight: " << ticket.flight << " cost: " << ticket.cost
       << " allowedCargo: " << ticket.allowedCargo << " seatId: " << ticket.seatId << " id: " << ticket.id;
    return os;
}
