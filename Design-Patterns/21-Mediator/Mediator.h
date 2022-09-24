#pragma once

#include <iostream>
#include "Colleague.h"

class Colleague;
class ConcreteColleague1;
class ConcreteColleague2;

class Mediator{
public:
    virtual void send(std::string, Colleague*) = 0;
};

class ConcreteMediator : public Mediator{
public:
    void setColl1(ConcreteColleague1* coll1){
        coll1_ = coll1;
    }
    void setColl2(ConcreteColleague2* coll2){
        coll2_ = coll2;
    }
    void send(std::string, Colleague*) override;
private:
    ConcreteColleague1* coll1_;
    ConcreteColleague2* coll2_;
};
