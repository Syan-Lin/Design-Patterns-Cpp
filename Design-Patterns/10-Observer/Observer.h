#pragma once

#include <iostream>
#include <memory>
#include "Data.h"

class Observer{
public:
    virtual void update(Data&) = 0;
};

class NumberObserver : public Observer{
public:
    void update(Data& data) override {
        using namespace std;
        cout << "NumberObserver 监听: " << data.num_ << endl;
    }
};

class StringObserver : public Observer{
public:
    void update(Data& data) override {
        using namespace std;
        cout << "StringObserver 监听: " << data.str_ << endl;
    }
};
