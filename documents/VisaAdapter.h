//
// Created by mikhail on 11.11.2019.
//

#ifndef PATTERNS_VISAADAPTER_H
#define PATTERNS_VISAADAPTER_H


#include "DocumentAdapter.h"

class VisaAdapter : public DocumentAdapter {
public:
    string getName() override;

    string getNumber() override;
};


#endif //PATTERNS_VISAADAPTER_H
