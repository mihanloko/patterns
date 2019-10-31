//
// Created by mikhail on 30.10.2019.
//

#ifndef PATTERNS_DOMESTICFLIGHT_H
#define PATTERNS_DOMESTICFLIGHT_H

#include <string>
#include <vector>

#include "Flight.h"

using namespace std;

/**
 * Внутренний рейс
 */
class DomesticFlight : public Flight {
public:
    DomesticFlight(vector<string> route);
};


#endif //PATTERNS_DOMESTICFLIGHT_H
