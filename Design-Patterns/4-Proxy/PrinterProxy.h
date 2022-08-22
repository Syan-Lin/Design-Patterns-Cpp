#pragma once

#include "Printer.h"
#include <iostream>
#include <memory>

class PrinterProxy: public Printable{
public:
    PrinterProxy(): name("null"), realPrinter(nullptr){}
    PrinterProxy(std::string name): name(name), realPrinter(nullptr){}
    std::string getPrinterName() override{
        return name;
    }
    void setPrinterName(std::string name) override{
        if(realPrinter != nullptr){
            realPrinter->setPrinterName(name);
        }
        this->name = name;
    }
    void print(std::string content) override {
        if(realPrinter == nullptr){
            callRealPrinter();
        }
        realPrinter->print(content);
    }
private:
    std::string name;
    std::shared_ptr<Printer> realPrinter;
    void callRealPrinter(){
        realPrinter = std::make_shared<Printer>(name);
    }
};
