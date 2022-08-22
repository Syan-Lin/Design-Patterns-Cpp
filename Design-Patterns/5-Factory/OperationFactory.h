#pragma once

#include "Operation.h"
#include <string>
#include <memory>
#include <iostream>

class IFactory{
public:
    virtual std::shared_ptr<Operation> createOperator(double a, double b) = 0;
};

class AddFactory: public IFactory{
public:
    std::shared_ptr<Operation> createOperator(double a, double b) override{
        return std::make_shared<OperationAdd>(a, b);
    }
};

class SubFactory: public IFactory{
public:
    std::shared_ptr<Operation> createOperator(double a, double b) override{
        return std::make_shared<OperationSub>(a, b);
    }
};

class MulFactory: public IFactory{
public:
    std::shared_ptr<Operation> createOperator(double a, double b) override{
        return std::make_shared<OperationMul>(a, b);
    }
};

class DivFactory: public IFactory{
public:
    std::shared_ptr<Operation> createOperator(double a, double b) override{
        return std::make_shared<OperationDiv>(a, b);
    }
};
