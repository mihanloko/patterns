//
// Created by mikhail on 18.12.2019.
//

#include "InternationalPassportCheck.h"
#include "../Logger.h"

InternationalPassportCheck::InternationalPassportCheck() {
    this->logger = new Logger("InternationalPassportCheck");
}

InternationalPassportCheck::InternationalPassportCheck(CheckHandler *next) : CheckHandler(next) {
    this->logger = new Logger("InternationalPassportCheck");
}

bool InternationalPassportCheck::handle(Passenger *passenger) {
    return isValid(passenger->getInternationalPassport()) && (next == nullptr ? 1 : next->handle(passenger));
}

bool InternationalPassportCheck::isValid(DocumentAdapter *internationalPassport) {
    bool res = rand() % 100 > 50;
    logger->info(res ? "valid" : "invalid");
    return res;
}
