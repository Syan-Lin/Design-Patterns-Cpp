#pragma once

#include "Printer.h"
#include <iostream>
#include <memory>

class Decorator: public IPrinter{
public:
    Decorator() = delete;
    Decorator(std::shared_ptr<IPrinter> component): component(component){}
    void decorate(std::shared_ptr<IPrinter> component){
        if(component == nullptr){
            std::cout << "Can't decorate a nullptr!" << std::endl;
            throw;
        }
        this->component = component;
    }
protected:
    std::shared_ptr<IPrinter> component;
};

class BracketDecorator1: public Decorator{
public:
    BracketDecorator1() = delete;
    BracketDecorator1(std::shared_ptr<IPrinter> component): Decorator(component){}
    void print() override{
        std::cout << "(";
        component->print();
        std::cout << ")";
    }
};

class BracketDecorator2: public Decorator{
public:
    BracketDecorator2() = delete;
    BracketDecorator2(std::shared_ptr<IPrinter> component): Decorator(component){}
    void print() override{
        std::cout << "<";
        component->print();
        std::cout << ">";
    }
};

class BracketDecorator3: public Decorator{
public:
    BracketDecorator3() = delete;
    BracketDecorator3(std::shared_ptr<IPrinter> component): Decorator(component){}
    void print() override{
        std::cout << "{";
        component->print();
        std::cout << "}";
    }
};
