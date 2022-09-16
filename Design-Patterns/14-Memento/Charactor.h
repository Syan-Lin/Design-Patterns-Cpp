#pragma once

#include <iostream>
#include "Memento.h"

class Charactor{
public:
    void setData(int health, int magic){
        health_ = health;
        magic_ = magic;
    }
    void print(){
        std::cout << "======Charactor======" << std::endl;
        std::cout << "生命值：" << health_ << std::endl;
        std::cout << "魔力值：" << magic_ << std::endl;
        std::cout << "=====================" << std::endl;
    }
    std::shared_ptr<Memento> createMemento(){
        return std::make_shared<Memento>(health_, magic_);
    }
    void setMemento(std::shared_ptr<Memento> m){
        health_ = m->health_;
        magic_ = m->magic_;
    }
private:
    int health_;
    int magic_;
};
