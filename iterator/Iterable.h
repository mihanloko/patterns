//
// Created by mikhail on 18.11.2019.
//

#ifndef PATTERNS_ITERABLE_H
#define PATTERNS_ITERABLE_H

#include "Iterator.h"

class Iterable {
public:
    virtual Iterator *getForwardIterator() = 0;

    virtual Iterator *getBackwardIterator() = 0;
};


#endif //PATTERNS_ITERABLE_H
