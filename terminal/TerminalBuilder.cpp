//
// Created by mikhail on 05.12.2019.
//

#include "TerminalBuilder.h"

Terminal *TerminalBuilder::getTerminal() {
    Terminal* result = terminal;
    this->reset();
    return result;
}

void TerminalBuilder::reset() {
    this->terminal = new Terminal();
}

TerminalBuilder::TerminalBuilder() {
    this->reset();
}
