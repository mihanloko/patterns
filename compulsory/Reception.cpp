//
// Created by mikhail on 12.11.2019.
//

#include "Reception.h"

Reception::Reception(int priority) : CompulsoryService(priority) {
    expert = InformationExpert::getInstance();
}

bool Reception::serve(Passenger *passenger) {
    Logger l("Reception");
    l.info("Served");
    return true;
}
