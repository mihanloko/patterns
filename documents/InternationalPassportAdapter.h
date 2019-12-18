//
// Created by mikhail on 11.11.2019.
//

#ifndef PATTERNS_INTERNATIONALPASSPORTADAPTER_H
#define PATTERNS_INTERNATIONALPASSPORTADAPTER_H


#include "DocumentAdapter.h"

class InternationalPassportAdapter : public DocumentAdapter {
    string getName() override;

    string getNumber() override;
};


#endif //PATTERNS_INTERNATIONALPASSPORTADAPTER_H
