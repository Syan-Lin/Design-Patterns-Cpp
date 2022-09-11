#pragma once

#include <iostream>
#include <vector>
#include <memory>
#include "Observer.h"

class Subject{
public:
    Subject(int num, std::string str){
        data_.num_ = num;
        data_.str_ = str;
    }
    void addObserver(std::shared_ptr<Observer> obs){
        observers_.push_back(obs);
    }
    void delObserver(std::shared_ptr<Observer> obs){
        using iterator = std::vector<std::shared_ptr<Observer>>::iterator;
        for(iterator iter = observers_.begin(); iter != observers_.end(); iter++){
            if(*iter == obs){
                observers_.erase(iter);
                break;
            }
        }
    }
protected:
    Data data_;
    void notifyObservers(){
        for(auto& e : observers_){
            e->update(data_);
        }
    }
private:
    std::vector<std::shared_ptr<Observer>> observers_;
};

class MySubject : public Subject{
public:
    MySubject(int num, std::string str) : Subject(num, str){}

    void setNumber(int num){
        data_.num_ = num;
        notifyObservers();
    }
    void setString(std::string str){
        data_.str_ = str;
        notifyObservers();
    }
};
