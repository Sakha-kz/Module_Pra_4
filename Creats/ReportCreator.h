#ifndef REPORTCREATOR_H
#define REPORTCREATOR_H

#include "DocumentCreator.h"
#include "../Documents/Report.h"

class ReportCreator : public DocumentCreator {
public:
    Document* CreateDocument() const override {
        return new Report();
    }
};

#endif