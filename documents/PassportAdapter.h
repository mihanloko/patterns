//
// Created by mikhail on 11.11.2019.
//

#ifndef PATTERNS_PASSPORTADAPTER_H
#define PATTERNS_PASSPORTADAPTER_H


#include "DocumentAdapter.h"

class PassportAdapter : public DocumentAdapter {
public:
    PassportAdapter();

    string getName() override;

    string getNumber() override;
};


#endif //PATTERNS_PASSPORTADAPTER_H
