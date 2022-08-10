#include "Strategy.h"
#include "CashRegister.h"
#include <iostream>
#include <memory>

using namespace std;

int main(){
    // 正常收费
    CashRegister cr = CashRegister(make_shared<FeeNormal>());
    cout << "原价：200 正常收费：" << cr.getFee(200) << endl;

    // 八折收费
    cr.changeStrategy(make_shared<FeeDiscount>(0.8));
    cout << "原价：200 八折收费：" << cr.getFee(200) << endl;

    // 满300减50收费
    cr.changeStrategy(make_shared<FeeReturn>(300, 50));
    cout << "原价：200 满 300 减 50 收费：" << cr.getFee(200) << endl;
    cout << "原价：300 满 300 减 50 收费：" << cr.getFee(300) << endl;

    return 0;
}
