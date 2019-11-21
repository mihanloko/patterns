//
// Created by mikhail on 04.11.2019.
//

#include "CompulsoryService.h"
#include "../iterator/ForwardIterator.h"
#include "../iterator/BackwardIterator.h"

CompulsoryService::CompulsoryService(int priority) {
    this->priority = priority;
}

Iterator *CompulsoryService::getForwardIterator() {
    return new ForwardIterator(getServices());
}

int CompulsoryService::getPriority() {
    return priority;
}

Iterator *CompulsoryService::getBackwardIterator() {
    return new BackwardIterator(getServices());
}

vector<ICompulsory *> CompulsoryService::getServices() {
    vector<ICompulsory *> services;
    services.push_back(this);
    return services;
}

