#ifndef INVOICECREATOR_H
#define INVOICECREATOR_H

#include "DocumentCreator.h"
#include "../Documents/Invoice.h"

class InvoiceCreator : public DocumentCreator {
public:
    Document* CreateDocument() const override {
        return new Invoice();
    }
};

#endif