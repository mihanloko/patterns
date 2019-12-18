//
// Created by mikhail on 18.12.2019.
//

#ifndef PATTERNS_VISACHECK_H
#define PATTERNS_VISACHECK_H


#include "CheckHandler.h"
#include "../documents/DocumentAdapter.h"

class VisaCheck: public CheckHandler {
private:
    bool isValid(DocumentAdapter *visa);
public:
    VisaCheck();

    VisaCheck(CheckHandler *next);

    bool handle(Passenger *passenger) override;
};


#endif //PATTERNS_VISACHECK_H
