#include <iostream>
#include "passenger/Passenger.h"
#include "passenger/IncomingPassenger.h"
#include "documents/Tickets/TicketPool.h"
#include "terminal/TerminalBuilder.h"
#include "passenger/OutgoingPassenger.h"

using namespace std;

int main() {
    srand(time(nullptr));
    /*Passenger* passenger = new Passenger(new OutgoingPassenger());
    passenger->visit();

    passenger = new Passenger(new IncomingPassenger());
    passenger->visit();


    //декоратор
    Ticket *simpleTicket = new Ticket();
    cout << simpleTicket->getCost() << " " << simpleTicket->getAllowedCargo() << endl;

    Ticket *business = new BusinessClassDecorator(new Ticket());
    cout << business->getCost() << " " << business->getAllowedCargo() << endl;

    Ticket *moreCargo = new MoreCargoDecorator(new Ticket());
    cout << moreCargo->getCost() << " " << moreCargo->getAllowedCargo() << endl;

    Ticket *full = new BusinessClassDecorator(new MoreCargoDecorator(new Ticket()));
    cout << full->getCost() << " " << full->getAllowedCargo() << endl;

    Ticket *deep = new BusinessClassDecorator(new MoreCargoDecorator(new BusinessClassDecorator(
            new MoreCargoDecorator(new BusinessClassDecorator(new MoreCargoDecorator(new Ticket()))))));
    cout << deep->getCost() << " " << deep->getAllowedCargo() << endl;


    GroupOfServices *groupOfServices = new GroupOfServices(0);
    GroupOfServices *innerGroupOfServices = new GroupOfServices(20);
    BaggageService *service1 = new BaggageService(5), *service2 = new BaggageService(
            25), *service3 = new BaggageService(30), *service4 = new BaggageService(40);
    innerGroupOfServices->addService(service2);
    innerGroupOfServices->addService(service3);
    groupOfServices->addService(service1);
    groupOfServices->addService(innerGroupOfServices);
    groupOfServices->addService(service4);

    for (auto i = groupOfServices->getBackwardIterator(); i->hasNext();) {
        i->getNext()->serve(passenger);
    }*/

    TicketPool *ticketPool = new TicketPool();
    ticketPool->createTickets(10, "Barnaul", "Moscow", 1000000);
    vector<Ticket*> tickets;
    for (int i = 0; i < 11; i++) {
        tickets.push_back(ticketPool->getTicket());
        if (tickets.back() != nullptr)
            cout << *tickets.back() << endl;
        else
            cout << 0 << endl;
    }

    ticketPool->removeTicket(tickets[0]);
    cout << *ticketPool->getTicket();



    /*Passenger *passenger = new Passenger(new OutgoingPassenger());

    TerminalBuilder *terminalBuilder = new TerminalBuilder();
    terminalBuilder->addBank();
    terminalBuilder->addCafe();
    terminalBuilder->addHotel();
    terminalBuilder->addWaitingRoom();
    Terminal *terminal = terminalBuilder->getTerminal();
    terminal->visit(passenger);*/


    return 0;
}
