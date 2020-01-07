//
// Created by mikhail on 26.11.2019.
//

#include "Terminal.h"
#include "../compulsory/Reception.h"
#include "../compulsory/PlaceOfBoarding.h"
#include "../compulsory/PassportControl.h"
#include "../compulsory/GroupOfServices.h"
#include "../compulsory/BaggageService.h"
#include "../compulsory/CustomsControl.h"

Terminal::Terminal() {
    GroupOfServices *all = new GroupOfServices(0);

    GroupOfServices *groupOfServices = new GroupOfServices(30);
    groupOfServices->addService(new BaggageService(20));
    groupOfServices->addService(new CustomsControl(40));

    all->addService(new Reception(5));
    all->addService(groupOfServices);
    all->addService(new PassportControl(90));
    all->addService(new PlaceOfBoarding(100));

    this->compulsoryServices = all;
}

void Terminal::addCommercialService(CommercialService *commercialService) {
    commercialServices.push_back(commercialService);
}

void Terminal::visit(Passenger *passenger) {
    passenger->visit(this);
}

CompulsoryService *Terminal::getCompulsoryServices() const {
    return compulsoryServices;
}
