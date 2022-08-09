#pragma once

#include "Operation.h"
#include <string>
#include <memory>
#include <iostream>

class OperationFactory{
public:
    template <class numA, class numB>
    static std::shared_ptr<Operation> createOperator(char oper, numA a, numB b){
        //只允许数字类型为int、float或double通过编译
        static_assert(std::is_same<int, numA>::value
                        || std::is_same<double, numA>::value
                        || std::is_same<float, numA>::value,"Unsupported class in numA!");
        static_assert(std::is_same<int, numB>::value
                        || std::is_same<double, numB>::value
                        || std::is_same<float, numB>::value,"Unsupported class in numB!");

        std::shared_ptr<Operation> p;
        switch(oper){
            case '+':
                p = std::make_shared<OperationAdd>(a, b);
                break;
            case '-':
                p = std::make_shared<OperationSub>(a, b);
                break;
            case '*':
                p = std::make_shared<OperationMul>(a, b);
                break;
            case '/':
                p = std::make_shared<OperationDiv>(a, b);
                break;
            default:
                std::cout << std::endl << "Operator is not defined!" << std::endl;
                throw;
                break;
        }

        if(p == nullptr){
            std::cout << std::endl << "Can't return a nullptr!" << std::endl;
            throw;
        }
        return p;
    }
};
