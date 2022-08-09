#include "OperationFactory.h"
#include "Operation.h"
#include <iostream>

using namespace std;

int main(){
    cout << "=========Calculator Full Test=========" << endl;
    cout << "1 + 2 = " << OperationFactory::createOperator('+', 1, 2)->getResult() << endl;
    cout << "0 + -2 = " << OperationFactory::createOperator('+', 0, -2)->getResult() << endl;
    cout << "1.5 + 2 = " << OperationFactory::createOperator('+', 1.5, 2)->getResult() << endl;
    cout << "1 + 2.5 = " << OperationFactory::createOperator('+', 1, 2.5)->getResult() << endl;
    cout << "1.5 + 2.5 = " << OperationFactory::createOperator('+', 1.5, 2.5)->getResult() << endl;

    cout << "1 - 2 = " << OperationFactory::createOperator('-', 1, 2)->getResult() << endl;
    cout << "0 - -2 = " << OperationFactory::createOperator('-', 0, -2)->getResult() << endl;
    cout << "1.5 - 2 = " << OperationFactory::createOperator('-', 1.5, 2)->getResult() << endl;
    cout << "1 - 2.5 = " << OperationFactory::createOperator('-', 1, 2.5)->getResult() << endl;
    cout << "1.5 - 2.5 = " << OperationFactory::createOperator('-', 1.5, 2.5)->getResult() << endl;

    cout << "1 * 2 = " << OperationFactory::createOperator('*', 1, 2)->getResult() << endl;
    cout << "0 * 2 = " << OperationFactory::createOperator('*', 0, 2)->getResult() << endl;
    cout << "1.5 * 2 = " << OperationFactory::createOperator('*', 1.5, 2)->getResult() << endl;
    cout << "1 * -2.5 = " << OperationFactory::createOperator('*', 1, -2.5)->getResult() << endl;
    cout << "1.5 * 2.5 = " << OperationFactory::createOperator('*', 1.5, 2.5)->getResult() << endl;

    cout << "1 / 2 = " << OperationFactory::createOperator('/', 1, 2)->getResult() << endl;
    cout << "0 / 2 = " << OperationFactory::createOperator('/', 0, 2)->getResult() << endl;
    cout << "1.5 / 2 = " << OperationFactory::createOperator('/', 1.5, 2)->getResult() << endl;
    cout << "1 / -2.5 = " << OperationFactory::createOperator('/', 1, -2.5)->getResult() << endl;
    cout << "1.5 / 2.5 = " << OperationFactory::createOperator('/', 1.5, 2.5)->getResult() << endl;
    //除零测试
    // cout << "1.5 / 0 = " << OperationFactory::createOperator('/', 1.5, 0)->getResult() << endl;
    // cout << "1.5 / 0.0 = " << OperationFactory::createOperator('/', 1.5, 0.0)->getResult() << endl;
    cout << "==============Test Done===============" << endl;
    return 0;
}
