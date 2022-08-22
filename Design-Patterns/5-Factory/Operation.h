#pragma once

#include <iostream>

class Operation{
public:
    Operation() = delete;
    Operation(double a, double b): numberA(a), numberB(b){};
    virtual double getResult() = 0;
    double numberA;
    double numberB;
};

class OperationAdd : public Operation{
public:
    OperationAdd(double a, double b): Operation(a, b){};
    double getResult() override{
        return numberA + numberB;
    };
};

class OperationSub : public Operation{
public:
    OperationSub(double a, double b): Operation(a, b){};
    double getResult() override{
        return numberA - numberB;
    };
};

class OperationMul : public Operation{
public:
    OperationMul(double a, double b): Operation(a, b){};
    double getResult() override{
        return numberA * numberB;
    };
};

class OperationDiv : public Operation{
public:
    OperationDiv(double a, double b): Operation(a, b){};
    double getResult() override{
        if(numberB == 0){
            std::cout << std::endl << "Can't divede a zero!" << std::endl;
            throw;
        }
        return numberA / numberB;
    };
};
