#pragma once

#include <iostream>
#include <memory>
#include "Memento.h"

class Caretaker{
public:
    void setMemento(std::shared_ptr<Memento> memento){
        memento_ = memento;
    }
    std::shared_ptr<Memento> getMemento(){
        return memento_;
    }
private:
    std::shared_ptr<Memento> memento_;
};
