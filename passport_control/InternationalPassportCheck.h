//
// Created by mikhail on 18.12.2019.
//

#ifndef PATTERNS_INTERNATIONALPASSPORTCHECK_H
#define PATTERNS_INTERNATIONALPASSPORTCHECK_H


#include "CheckHandler.h"
#include "../documents/DocumentAdapter.h"

class InternationalPassportCheck : public CheckHandler {
private:
    bool isValid(DocumentAdapter *internationalPassport);

public:
    InternationalPassportCheck();

    InternationalPassportCheck(CheckHandler *next);

    bool handle(Passenger *passenger) override;
};


#endif //PATTERNS_INTERNATIONALPASSPORTCHECK_H
