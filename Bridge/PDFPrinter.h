//
// Created by mikhail on 26.11.2019.
//

#ifndef PATTERNS_PDFPRINTER_H
#define PATTERNS_PDFPRINTER_H


#include "IPrinter.h"
#include "../Logger.h"

class PDFPrinter : public IPrinter {
private:
    Logger *logger;
public:
    PDFPrinter();
};


#endif //PATTERNS_PDFPRINTER_H
