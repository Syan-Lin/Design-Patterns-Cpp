#pragma once

class Strategy{
public:
    virtual double getPrice(double money) = 0;
};

// 正常收费
class FeeNormal : public Strategy{
public:
    double getPrice(double money) override{
        return money;
    }
};

// 打折收费
class FeeDiscount : public Strategy{
public:
    FeeDiscount() = delete;
    FeeDiscount(double discount): discount(discount){}
    double getPrice(double money) override{
        return money * discount;
    }
private:
    double discount;
};

// 满减收费
class FeeReturn : public Strategy{
public:
    FeeReturn() = delete;
    FeeReturn(double price, double reduce): returnPrice(price), reduce(reduce){}
    double getPrice(double money) override{
        if(money >= returnPrice){
            return money - reduce;
        }else{
            return money;
        }
    }
private:
    double returnPrice;
    double reduce;
};
