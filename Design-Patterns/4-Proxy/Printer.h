#pragma once

#include <iostream>
#include <chrono>
#include <thread>

class Printable{
public:
    virtual std::string getPrinterName() = 0;
    virtual void setPrinterName(std::string) = 0;
    virtual void print(std::string) = 0;
};

class Printer : public Printable{
public:
    Printer(): name("null"){}
    Printer(std::string name): name(name){
        std::cout << "对象实例化..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(5));
    }
    std::string getPrinterName() override{
        return name;
    }
    void setPrinterName(std::string name) override{
        this->name = name;
    }
    void print(std::string content) override {
        std::cout << name << ": " << content << std::endl;
    }
private:
    std::string name;
};
