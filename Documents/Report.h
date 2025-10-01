#ifndef REPORT_H
#define REPORT_H

#include "Document.h"

class Report : public Document {
public:
    void Open() const override {
        std::cout << "Открыт документ: Отчёт\n";
    }
};

#endif