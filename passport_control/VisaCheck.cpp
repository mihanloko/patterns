//
// Created by mikhail on 18.12.2019.
//

#include "VisaCheck.h"
#include "../Logger.h"

VisaCheck::VisaCheck() {
    this->logger = new Logger("VisaCheck");
}

VisaCheck::VisaCheck(CheckHandler *next) : CheckHandler(next) {
    this->logger = new Logger("VisaCheck");
}

bool VisaCheck::handle(Passenger *passenger) {
    return isValid(passenger->getVisa()) && (next == nullptr ? 1 : next->handle(passenger));
}

bool VisaCheck::isValid(DocumentAdapter *visa) {
    bool res = rand() % 100 > 50;
    logger->info(res ? "valid" : "invalid");
    return res;
}
