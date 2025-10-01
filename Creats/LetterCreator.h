#ifndef LETTERCREATOR_H
#define LETTERCREATOR_H

#include "DocumentCreator.h"
#include "../Documents/Letter.h"

class LetterCreator : public DocumentCreator {
public:
    Document* CreateDocument() const override {
        return new Letter();
    }
};

#endif