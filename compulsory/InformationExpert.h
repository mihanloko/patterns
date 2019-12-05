//
// Created by mikhail on 26.11.2019.
//

#ifndef PATTERNS_INFORMATIONEXPERT_H
#define PATTERNS_INFORMATIONEXPERT_H

#include <vector>
#include <ctime>

using namespace std;

class InformationExpert {
private:
    class Data {
    public:
        time_t flightTime, arrivalTime;

        Data(time_t flightTime, time_t arrivalTime) {
            this->flightTime = flightTime;
            this->arrivalTime = arrivalTime;
        };
    };

    vector<Data> data;

    static InformationExpert *instance;
    InformationExpert();

public:
    void putData(time_t flightTime, time_t arrivalTime);

    time_t calculateAverageWaiting();

    time_t calculateMedianWaiting();

    static InformationExpert *getInstance();
};


#endif //PATTERNS_INFORMATIONEXPERT_H
