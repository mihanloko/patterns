//
// Created by mikhail on 26.11.2019.
//

#ifndef PATTERNS_TERMINAL_H
#define PATTERNS_TERMINAL_H

#include <vector>
//#include "../compulsory/CompulsoryService.h"
#include "../commercial/CommercialService.h"
#include "../terminal/Terminal.h"
using namespace std;

class CompulsoryService;
class Passenger;

class Terminal {
private:
    CompulsoryService *compulsoryServices;
    vector<CommercialService *> commercialServices;
public:
    void visit(Passenger *passenger);

    void addCommercialService(CommercialService *commercialService);
    Terminal();

    CompulsoryService *getCompulsoryServices() const;
};


#endif //PATTERNS_TERMINAL_H
