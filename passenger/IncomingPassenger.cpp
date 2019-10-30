//
// Created by mikhail on 30.10.2019.
//

#include "IncomingPassenger.h"

void IncomingPassenger::visit(Ticket* ticket) {
    vector<string> route = ticket->getFlight()->getRoute();
    for (auto service = route.rbegin(); service != route.rend(); service++) {
        cout << "i am in " << *service << endl;
    }
}
