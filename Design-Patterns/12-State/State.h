#pragma once

#include "Connection.h"
#include <iostream>
#include <memory>

class Connection;

class State{
public:
    State(std::string name) : kName(name){}
    virtual ~State(){}
    const std::string kName;
    virtual void handle(Connection&) = 0;
    virtual bool changeState(Connection&, State*) = 0;
};

class Listen : public State{
public:
    Listen() : State("Listen"){}
    void handle(Connection&) override;
    bool changeState(Connection&, State*) override;
};

class Established : public State{
public:
    Established() : State("Established"){}
    void handle(Connection&) override;
    bool changeState(Connection&, State*) override;
};

class Closed : public State{
public:
    Closed() : State("Closed"){}
    void handle(Connection&) override;
    bool changeState(Connection&, State*) override;
};