//
// Created by mikhail on 30.10.2019.
//

#include "OutgoingPassenger.h"

void OutgoingPassenger::visit(Ticket* ticket) {
    for (const string& service: ticket->getFlight()->getRoute()) {
        cout << "i am in " << service << endl;
    }
}
