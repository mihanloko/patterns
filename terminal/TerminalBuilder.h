//
// Created by mikhail on 05.12.2019.
//

#ifndef PATTERNS_TERMINALBUILDER_H
#define PATTERNS_TERMINALBUILDER_H


#include "Terminal.h"

class TerminalBuilder {
private:
    Terminal *terminal;
public:
    void reset();
    Terminal* getTerminal();
    void addHotel();
    void addBank();
    void addWaitingRoom();
    void addCafe();
    TerminalBuilder();
};


#endif //PATTERNS_TERMINALBUILDER_H
