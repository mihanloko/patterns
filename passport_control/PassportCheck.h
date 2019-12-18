//
// Created by mikhail on 18.12.2019.
//

#ifndef PATTERNS_PASSPORTCHECK_H
#define PATTERNS_PASSPORTCHECK_H


#include "CheckHandler.h"
#include "../documents/DocumentAdapter.h"

class PassportCheck : public CheckHandler {
private:
    bool isValid(DocumentAdapter *passport);
public:
    PassportCheck(CheckHandler *next);

    bool handle(Passenger *passenger) override;

    PassportCheck();
};


#endif //PATTERNS_PASSPORTCHECK_H
