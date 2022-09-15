#pragma once

#include <memory>
#include "State.h"

class State;

class Connection{
public:
    Connection();
    void listen();
    void send();
    void close();
    State& state();
    void setState(State*);
    std::string ip();
    void setIp(std::string);
private:
    std::unique_ptr<State> state_;
    std::string ip_;
};
