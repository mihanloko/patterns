//
// Created by mikhail on 05.12.2019.
//

#include "TerminalBuilder.h"
#include "../commercial/Hotel.h"
#include "../commercial/Bank.h"
#include "../commercial/WaitingRoom.h"
#include "../commercial/Cafe.h"

Terminal *TerminalBuilder::getTerminal() {
    Terminal* result = terminal;
    this->reset();
    return result;
}

void TerminalBuilder::reset() {
    isBankEnabled = false;
    isCafeEnabled = false;
    isHotelEnabled = false;
    isWaitingRoomEnabled = false;
    this->terminal = new Terminal();
}

TerminalBuilder::TerminalBuilder() {
    this->reset();
}

void TerminalBuilder::addHotel() {
    if (!isHotelEnabled) {
        isHotelEnabled = true;
        terminal->addCommercialService(new Hotel());
    }
}

void TerminalBuilder::addBank() {
    if (isBankEnabled) {
        isBankEnabled = true;
        terminal->addCommercialService(new Bank());
    }
}

void TerminalBuilder::addWaitingRoom() {
    if (isWaitingRoomEnabled) {
        isWaitingRoomEnabled = true;
        terminal->addCommercialService(new WaitingRoom());
    }
}

void TerminalBuilder::addCafe() {
    if (isCafeEnabled) {
        isCafeEnabled = true;
        terminal->addCommercialService(new Cafe());
    }
}
