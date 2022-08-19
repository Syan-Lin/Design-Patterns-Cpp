#pragma once

#include <iostream>

class IPrinter{
public:
    virtual void print() = 0;
};

class Printer : public IPrinter{
public:
    Printer(): content("null"){}
    Printer(std::string content): content(content){}
    void print() override {
        std::cout << content;
    }
private:
    std::string content;
};
