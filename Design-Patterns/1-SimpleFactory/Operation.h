#pragma once

#include <iostream>

class Operation{
public:
    Operation() = delete;
    template <class numA, class numB>
    Operation(numA a, numB b): numberA(static_cast<double>(a)), numberB(static_cast<double>(b)){};
    virtual double getResult() = 0;
    double numberA;
    double numberB;
};

class OperationAdd : public Operation{
public:
    template <class numA, class numB>
    OperationAdd(numA a, numB b): Operation(a, b){};
    double getResult() override{
        return numberA + numberB;
    };
};

class OperationSub : public Operation{
public:
    template <class numA, class numB>
    OperationSub(numA a, numB b): Operation(a, b){};
    double getResult() override{
        return numberA - numberB;
    };
};

class OperationMul : public Operation{
public:
    template <class numA, class numB>
    OperationMul(numA a, numB b): Operation(a, b){};
    double getResult() override{
        return numberA * numberB;
    };
};

class OperationDiv : public Operation{
public:
    template <class numA, class numB>
    OperationDiv(numA a, numB b): Operation(a, b){};
    double getResult() override{
        if(numberB == 0){
            std::cout << std::endl << "Can't divede a zero!" << std::endl;
            throw;
        }
        return numberA / numberB;
    };
};
