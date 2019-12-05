//
// Created by mikhail on 26.11.2019.
//

#include "InformationExpert.h"

InformationExpert *InformationExpert::instance = (InformationExpert*) nullptr;

time_t InformationExpert::calculateAverageWaiting() {
    time_t average = 0;

    for (Data d: data) {
        average += (d.flightTime - d.arrivalTime);
    }

    return average / data.size();
}

time_t InformationExpert::calculateMedianWaiting() {
    time_t res = 0;
    if (!data.empty()) {
        unsigned long mid = data.size() / 2;
        res = data[mid].flightTime - data[mid].arrivalTime;
    }
    return res;
}

void InformationExpert::putData(time_t flightTime, time_t arrivalTime) {
    data.emplace_back(flightTime, arrivalTime);
}

InformationExpert::InformationExpert() {

}

InformationExpert *InformationExpert::getInstance() {
    if (instance == nullptr)
        instance = new InformationExpert();

    return instance;
}
