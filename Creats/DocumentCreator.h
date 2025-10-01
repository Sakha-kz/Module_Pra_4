#ifndef DOCUMENTCREATOR_H
#define DOCUMENTCREATOR_H

#include "../Documents/Document.h"

class DocumentCreator {
public:
    virtual ~DocumentCreator() = default;
    virtual Document* CreateDocument() const = 0;
};

#endif