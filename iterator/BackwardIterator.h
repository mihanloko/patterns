//
// Created by mikhail on 18.11.2019.
//

#ifndef PATTERNS_BACKWARDITERATOR_H
#define PATTERNS_BACKWARDITERATOR_H

#include "Iterator.h"
#include "../compulsory/ICompulsory.h"

class BackwardIterator : public Iterator {
public:
    BackwardIterator(vector<ICompulsory *> list);

    bool hasNext() override;

    ICompulsory *getNext() override;
};


#endif //PATTERNS_BACKWARDITERATOR_H
