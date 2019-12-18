//
// Created by mikhail on 18.12.2019.
//

#include "PassportCheck.h"
#include "../Logger.h"
#include <random>

PassportCheck::PassportCheck(CheckHandler *next) : CheckHandler(next) {
    this->logger = new Logger("PassportCheck");
}

bool PassportCheck::isValid(DocumentAdapter *passport) {
    bool res = rand() % 100 > 50;
    logger->info(res ? "valid" : "invalid");
    return res;
}

bool PassportCheck::handle(Passenger *passenger) {
    return isValid(passenger->getPassport()) && (next == nullptr ? 1 : next->handle(passenger));
}

PassportCheck::PassportCheck() {
    this->logger = new Logger("PassportCheck");
}
