#pragma once

#include "Mediator.h"
#include <iostream>

class Mediator;

class Colleague{
public:
    Colleague(Mediator* mediator) : mediator_(mediator){}
    void setMediator(Mediator*);
    void send(std::string);
    virtual void receive(std::string) = 0;
private:
    Mediator* mediator_;
};

class ConcreteColleague1 : public Colleague{
public:
    ConcreteColleague1(Mediator* mediator) : Colleague(mediator){}
    void receive(std::string str){
        std::cout << "Colleague1 receives a message <" << str << ">" << std::endl;
    }
};

class ConcreteColleague2 : public Colleague{
public:
    ConcreteColleague2(Mediator* mediator) : Colleague(mediator){}
    void receive(std::string str){
        std::cout << "Colleague2 receives a message <" << str << ">" << std::endl;
    }
};
