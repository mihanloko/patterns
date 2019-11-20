//
// Created by mikhail on 18.11.2019.
//

#ifndef PATTERNS_ITERATOR_H
#define PATTERNS_ITERATOR_H

#include <algorithm>
#include <vector>
#include "../compulsory/ICompulsory.h"

using namespace std;

class CompulsoryService;

class Iterator {
protected:
    vector<ICompulsory *> list;
    int pos;
public:
//    Iterator(vector<ICompulsory*> list);
    virtual bool hasNext() = 0;

    virtual ICompulsory *getNext() = 0;
};


#endif //PATTERNS_ITERATOR_H
