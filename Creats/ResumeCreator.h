#ifndef RESUMECREATOR_H
#define RESUMECREATOR_H

#include "DocumentCreator.h"
#include "../Documents/Resume.h"

class ResumeCreator : public DocumentCreator {
public:
    Document* CreateDocument() const override {
        return new Resume();
    }
};

#endif