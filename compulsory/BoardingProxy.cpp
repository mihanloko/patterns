//
// Created by mikhail on 04.11.2019.
//

#include "BoardingProxy.h"

void BoardingProxy::serve(Passenger *passenger) {
    if (checkDocuments(passenger)) {
        placeOfBoarding->serve(passenger);
    } else {
        logger->info("Пассажира не пустили");
    }
}

bool BoardingProxy::checkDocuments(Passenger *passenger) {
    auto documents = passenger->getDocuments();
    //todo настоящая проверка документов когда они будут
    return false;
}
