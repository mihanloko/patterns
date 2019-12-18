//
// Created by mikhail on 18.12.2019.
//

#ifndef PATTERNS_CHECKHANDLER_H
#define PATTERNS_CHECKHANDLER_H


#include "../passenger/Passenger.h"
#include "../Logger.h"

class Passenger;

class CheckHandler {
protected:
    CheckHandler *next;
    Logger *logger;

public:
    CheckHandler *getNext() const;

    void setNext(CheckHandler *next);

    CheckHandler();

    virtual bool handle(Passenger *passenger) = 0;

    CheckHandler(CheckHandler *next);
};


#endif //PATTERNS_CHECKHANDLER_H
