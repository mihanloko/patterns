//
// Created by mikhail on 12.11.2019.
//

#include "BaggageService.h"
#include "../Logger.h"

void BaggageService::serve(Passenger *passenger) {
    Logger l("BaggageService");
    l.info("Served " + to_string(priority));
}

BaggageService::BaggageService(int priority) : CompulsoryService(priority) {

}
