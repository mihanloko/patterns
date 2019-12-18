//
// Created by mikhail on 13.11.2019.
//

#include "GroupOfServices.h"

bool GroupOfServices::serve(Passenger *passenger) {
    bool res = true;
    for (CompulsoryService *service: services)
        res &= service->serve(passenger);
    return res;
}

void GroupOfServices::remove(CompulsoryService *service) {
    auto i = services.begin();
    while (i != services.end() && *i != service)
        i++;
    if (*i == service)
        services.erase(i);
}

void GroupOfServices::addService(CompulsoryService *service) {
    services.push_back(service);
}

vector<ICompulsory *> GroupOfServices::getServices() {
    vector<ICompulsory *> allServices;
    for (CompulsoryService *service: services) {
        vector<ICompulsory *> inner = service->getServices();
        allServices.insert(allServices.end(), inner.begin(), inner.end());
    }
    return allServices;
}

GroupOfServices::GroupOfServices(int priority) : CompulsoryService(priority) {

}
