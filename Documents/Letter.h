#ifndef LETTER_H
#define LETTER_H

#include "Document.h"

class Letter : public Document {
public:
    void Open() const override {
        std::cout << "Открыт документ: Письмо\n";
    }
};

#endif