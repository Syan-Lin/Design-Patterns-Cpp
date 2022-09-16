#pragma once

#include <iostream>

class Singleton{
public:
    static Singleton& getInstance(){
        if(instance_ == nullptr){
            instance_ = new Singleton();
        }
        return *instance_;
    }
    void function(){
        std::cout << "function..." << std::endl;
    }
private:
    static Singleton* instance_;
    Singleton(){
        std::cout << "Singleton created." << std::endl;
    }
    Singleton(Singleton&) = delete;
};

Singleton* Singleton::instance_ = nullptr;
