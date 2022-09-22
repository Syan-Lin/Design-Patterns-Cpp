#pragma once

#include <iostream>
#include <memory>

// 类的实现层次中的接口，定义功能接口
class PrintImpl{
public:
    virtual void open() = 0;
    virtual void print(std::string&) = 0;
    virtual void close() = 0;
};

// 类的实现层次中的实现，完成具体的功能细节
class PrintStyleOne : public PrintImpl{
public:
    void open() override {
        std::cout << "==========================" << std::endl;
    }
    void print(std::string& str) override {
        std::cout << str << std::endl;
    }
    void close() override {
        std::cout << "==========================" << std::endl;
    }
};

// 类的实现层次中的另一种实现，完成具体的功能细节
class PrintStyleTwo : public PrintImpl{
public:
    void open() override {
        std::cout << "+------------------------+" << std::endl;
    }
    void print(std::string& str) override {
        std::cout << str << std::endl;
    }
    void close() override {
        std::cout << "+------------------------+" << std::endl;
    }
};

// 类的功能层次中的实现，实现具体流程
class Display{
public:
    Display(std::shared_ptr<PrintImpl> print){
        print_ = print;
    }
    void displayInfo(std::string str){
        print_->open();
        print_->print(str);
        print_->close();
    }

protected:
    std::shared_ptr<PrintImpl> print_;
};

// 类的功能层次中的实现的拓展
class DisplayRepeat : public Display{
public:
    DisplayRepeat(std::shared_ptr<PrintImpl> print) : Display(print) {}
    void displayInfoRepeat(std::string str, size_t num){
        print_->open();
        for(int i = 0; i < num; i++){
            print_->print(str);
        }
        print_->close();
    }
};
