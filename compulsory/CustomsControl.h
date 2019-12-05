//
// Created by mikhail on 12.11.2019.
//

#ifndef PATTERNS_CUSTOMSCONTROL_H
#define PATTERNS_CUSTOMSCONTROL_H


#include "CompulsoryService.h"

class CustomsControl : public CompulsoryService {
public:
    CustomsControl(int priority);

    void serve(Passenger *passenger) override;
};


#endif //PATTERNS_CUSTOMSCONTROL_H
