//
// Created by mikhail on 19.11.2019.
//

#ifndef PATTERNS_ICOMPULSORY_H
#define PATTERNS_ICOMPULSORY_H


#include "../passenger/Passenger.h"

class ICompulsory {
protected:
    virtual std::vector<ICompulsory *> getServices() = 0;

public:
    virtual void serve(Passenger *passenger) = 0;

    virtual int getPriority() = 0;
};


#endif //PATTERNS_ICOMPULSORY_H
