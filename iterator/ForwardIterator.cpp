//
// Created by mikhail on 18.11.2019.
//

#include "ForwardIterator.h"
//#include "../compulsory/ICompulsory.h"


ForwardIterator::ForwardIterator(vector<ICompulsory *> list) {
    this->list = list;
    pos = 0;
    sort(list.begin(), list.end(), [](ICompulsory *a, ICompulsory *b) -> bool {
        return a->getPriority() < b->getPriority();
    });
}

bool ForwardIterator::hasNext() {
    return pos < list.size();
}

ICompulsory *ForwardIterator::getNext() {
    return hasNext() ? list[pos++] : nullptr;
}


