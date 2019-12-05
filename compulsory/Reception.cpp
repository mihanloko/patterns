//
// Created by mikhail on 12.11.2019.
//

#include "Reception.h"

Reception::Reception(int priority) : CompulsoryService(priority) {
    expert = InformationExpert::getInstance();
}

void Reception::serve(Passenger *passenger) {

}
