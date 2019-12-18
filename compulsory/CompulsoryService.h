//
// Created by mikhail on 04.11.2019.
//

#ifndef PATTERNS_COMPULSORYSERVICE_H
#define PATTERNS_COMPULSORYSERVICE_H


#include "../iterator/Iterable.h"
#include "ICompulsory.h"

class ICompulsory;

class CompulsoryService : public Iterable, public ICompulsory {
protected:
    int priority;
public:
    CompulsoryService(int priority);

    Iterator *getForwardIterator() override;

    Iterator *getBackwardIterator() override;

    virtual int getPriority() override;

    vector<ICompulsory *> getServices() override;
};


#endif //PATTERNS_COMPULSORYSERVICE_H
