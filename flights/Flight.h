//
// Created by mikhail on 30.10.2019.
//

#ifndef PATTERNS_FLIGHT_H
#define PATTERNS_FLIGHT_H

#include <vector>
#include <string>

using namespace std;

/**
 * Авиарейс, абстрактный класс
 */
class Flight {
protected:
    vector<string> route;
public:
    const virtual vector<string> &getRoute() const;
};


#endif //PATTERNS_FLIGHT_H
