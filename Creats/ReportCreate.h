#ifndef REPORTCREATE_H
#define REPORTCREATE_H


#pragma once
#include "../Documents/Document.h"
#include <iostream>

class Report : public Document {
public:
    void Open() override {
        std::cout << "Открытие отчета..." << std::endl;
    }
};

#endif