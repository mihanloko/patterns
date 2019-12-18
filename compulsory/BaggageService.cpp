//
// Created by mikhail on 12.11.2019.
//

#include "BaggageService.h"
#include "../Logger.h"

bool BaggageService::serve(Passenger *passenger) {
    Logger l("BaggageService");
    l.info("Served " + to_string(priority));
    return true;
}

BaggageService::BaggageService(int priority) : CompulsoryService(priority) {

}
