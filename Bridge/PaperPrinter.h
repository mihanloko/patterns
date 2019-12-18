//
// Created by mikhail on 26.11.2019.
//

#ifndef PATTERNS_PAPERPRINTER_H
#define PATTERNS_PAPERPRINTER_H


#include "IPrinter.h"
#include "../Logger.h"

class PaperPrinter : public IPrinter {
private:
    Logger *logger;
public:
    PaperPrinter();
    Ticket *printTicket() override;
};


#endif //PATTERNS_PAPERPRINTER_H
