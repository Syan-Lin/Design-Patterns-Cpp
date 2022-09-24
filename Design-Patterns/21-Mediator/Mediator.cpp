#include "Mediator.h"

void ConcreteMediator::send(std::string str, Colleague* colleague){
    if(colleague == coll1_){
        coll2_->receive(str);
    }else if(colleague == coll2_){
        coll1_->receive(str);
    }
}