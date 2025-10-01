#ifndef RESUME_H
#define RESUME_H

#include "Document.h"

class Resume : public Document {
public:
    void Open() const override {
        std::cout << "Открыт документ: Резюме\n";
    }
};

#endif