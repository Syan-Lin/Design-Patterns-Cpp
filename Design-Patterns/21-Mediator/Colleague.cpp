#include "Colleague.h"

void Colleague::setMediator(Mediator* mediator) {
    mediator_ = mediator;
}

void Colleague::send(std::string str){
    mediator_->send(str, this);
}