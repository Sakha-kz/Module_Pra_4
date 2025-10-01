#ifndef INVOICE_H
#define INVOICE_H

#include "Document.h"

class Invoice : public Document {
public:
    void Open() const override {
        std::cout << "Открыт документ: Счёт-фактура\n";
    }
};

#endif