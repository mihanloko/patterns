//
// Created by mikhail on 18.11.2019.
//

#ifndef PATTERNS_FORWARDITERATOR_H
#define PATTERNS_FORWARDITERATOR_H


#include "Iterator.h"
#include "../compulsory/ICompulsory.h"


class ForwardIterator : public Iterator {
public:
    ForwardIterator(vector<ICompulsory *> list);

    bool hasNext() override;

    ICompulsory *getNext() override;
};


#endif //PATTERNS_FORWARDITERATOR_H
