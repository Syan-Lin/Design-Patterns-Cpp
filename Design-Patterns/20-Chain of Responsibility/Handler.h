#pragma once

#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>

struct Request{
    int priority_;
};

class Handler{
public:
    void setHandler(std::shared_ptr<Handler> handler){
        nextHandler_ = handler;
    }
    virtual void request(Request&) = 0;
protected:
    std::shared_ptr<Handler> nextHandler_;
};

class ConcreteHandler1 : public Handler{
public:
    void request(Request& request){
        if(request.priority_ == 0){
            std::cout << "处理优先级为 0 的请求" << std::endl;
        }else if(nextHandler_ == nullptr){
            std::cout << "没有能够处理请求的 Handler" << std::endl;
        }else{
            std::cout << "无法处理请求，移交下一个 Handler" << std::endl;
            nextHandler_->request(request);
        }
    }
};

class ConcreteHandler2 : public Handler{
public:
    void request(Request& request){
        if(request.priority_ == 1){
            std::cout << "处理优先级为 1 的请求" << std::endl;
        }else if(nextHandler_ == nullptr){
            std::cout << "没有能够处理请求的 Handler" << std::endl;
        }else{
            std::cout << "无法处理请求，移交下一个 Handler" << std::endl;
            nextHandler_->request(request);
        }
    }
};
