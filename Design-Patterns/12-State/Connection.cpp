#include "Connection.h"

Connection::Connection(){
    state_ = std::make_unique<Closed>();
}
State& Connection::state(){
    return *state_;
}
void Connection::setState(State* state){
    state_.reset(state);
}
std::string Connection::ip(){
    return ip_;
}
void Connection::setIp(std::string ip){
    ip_ = ip;
}

void Connection::listen(){
    if(state_->changeState(*this, new Listen())){
        state_->handle(*this);
    }
}

void Connection::send(){
    if(state_->changeState(*this, new Established())){
        state_->handle(*this);
    }
}

void Connection::close(){
    if(state_->changeState(*this, new Closed())){
        state_->handle(*this);
    }
}
