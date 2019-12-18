//
// Created by mikhail on 26.11.2019.
//

#include "TicketPrinter.h"
#include "PaperPrinter.h"

Ticket *TicketPrinter::bueTicket() {
    return printer->printTicket();
}

TicketPrinter::TicketPrinter() {
    printer = new PaperPrinter();
}
