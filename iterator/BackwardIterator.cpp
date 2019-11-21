//
// Created by mikhail on 18.11.2019.
//

#include "BackwardIterator.h"

BackwardIterator::BackwardIterator(vector<ICompulsory *> list) {
    this->list = list;
    pos = list.size();
    sort(list.begin(), list.end(), [](ICompulsory *a, ICompulsory *b) -> bool {
        return a->getPriority() > b->getPriority();
    });
}

bool BackwardIterator::hasNext() {
    return pos > 0;
}

ICompulsory *BackwardIterator::getNext() {
    return hasNext() ? list[--pos] : nullptr;
}