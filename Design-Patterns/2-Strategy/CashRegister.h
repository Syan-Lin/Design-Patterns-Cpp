#pragma once

#include "Strategy.h"
#include <memory>

class CashRegister{
public:
    CashRegister(){ feeStrategy = std::make_shared<FeeNormal>(); }
    CashRegister(std::shared_ptr<Strategy> st){ feeStrategy = st; }

    double getFee(double price){
        return feeStrategy->getPrice(price);
    }

    void changeStrategy(std::shared_ptr<Strategy> st){ feeStrategy = st; }

private:
    std::shared_ptr<Strategy> feeStrategy;
};
