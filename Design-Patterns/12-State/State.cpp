#include "State.h"

void Listen::handle(Connection& connection){
    std::cout << "开始监听 TCP 连接" << std::endl;
}

bool Listen::changeState(Connection& connection, State* state){
    if(state->name == "Established"){
        connection.setState(new Established());
        return true;
    }else if(state->name == "Closed"){
        connection.setState(new Closed());
        return true;
    }else{
        std::cout << "状态错误！" << std::endl;
        delete state;
        return false;
    }
}

void Established::handle(Connection& connection){
    std::cout << "开始收发数据与 ip: " + connection.ip() << std::endl;
}

bool Established::changeState(Connection& connection, State* state){
    if(state->name == "Closed"){
        connection.setState(new Closed());
        return true;
    }else{
        std::cout << "状态错误！" << std::endl;
        delete state;
        return false;
    }
}

void Closed::handle(Connection& connection){
    std::cout << "关闭 TCP 连接" << std::endl;
}

bool Closed::changeState(Connection& connection, State* state){
    if(state->name == "Listen"){
        connection.setState(new Listen());
        return true;
    }else{
        std::cout << "状态错误！" << std::endl;
        delete state;
        return false;
    }
}
