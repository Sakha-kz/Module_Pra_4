#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <iostream>
#include <string>


class Document {
public:
    virtual ~Document() = default;
    virtual void Open() const = 0;
};

#endif