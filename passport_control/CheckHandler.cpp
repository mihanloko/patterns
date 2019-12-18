//
// Created by mikhail on 18.12.2019.
//

#include "CheckHandler.h"

CheckHandler *CheckHandler::getNext() const {
    return next;
}

void CheckHandler::setNext(CheckHandler *next) {
    this->next = next;
}

CheckHandler::CheckHandler(CheckHandler *next) {
    this->next = next;
}

CheckHandler::CheckHandler() {
    this->next = nullptr;
}
