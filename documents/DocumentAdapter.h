//
// Created by mikhail on 11.11.2019.
//

#ifndef PATTERNS_DOCUMENTADAPTER_H
#define PATTERNS_DOCUMENTADAPTER_H

#include <string>
#include "Document.h"

using namespace std;

class DocumentAdapter {
protected:
    Document *document;
public:
    //todo сказать что нам в принципе надо брать и реализовать в адаптерах
    virtual string getName() = 0;

    virtual string getNumber() = 0;
};


#endif //PATTERNS_DOCUMENTADAPTER_H
