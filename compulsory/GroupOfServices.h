//
// Created by mikhail on 13.11.2019.
//

#ifndef PATTERNS_GROUPOFSERVICES_H
#define PATTERNS_GROUPOFSERVICES_H

#include <vector>
#include "CompulsoryService.h"

using namespace std;

class GroupOfServices : public CompulsoryService {
private:
    vector<CompulsoryService *> services;
public:
    vector<ICompulsory *> getServices() override;

    void serve(Passenger *passenger) override;

    void addService(CompulsoryService *service);

    void remove(CompulsoryService *service);

    GroupOfServices(int priority);
};


#endif //PATTERNS_GROUPOFSERVICES_H
