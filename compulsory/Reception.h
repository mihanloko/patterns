//
// Created by mikhail on 12.11.2019.
//

#ifndef PATTERNS_RECEPTION_H
#define PATTERNS_RECEPTION_H


#include "CompulsoryService.h"
#include "InformationExpert.h"

class Reception : public CompulsoryService {
public:
    Reception(int priority);
    bool serve(Passenger *passenger) override;

private:
    InformationExpert *expert;

};


#endif //PATTERNS_RECEPTION_H
