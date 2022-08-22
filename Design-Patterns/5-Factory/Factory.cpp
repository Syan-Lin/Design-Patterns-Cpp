#include "OperationFactory.h"
#include "Operation.h"
#include <iostream>

using namespace std;

int main(){
    auto af = make_shared<AddFactory>();
    auto sf = make_shared<SubFactory>();
    auto mf = make_shared<MulFactory>();
    auto df = make_shared<DivFactory>();

    cout << "=========Calculator Full Test=========" << endl;
    cout << "1 + 2 = " << af->createOperator(1, 2)->getResult() << endl;
    cout << "0 + -2 = " << af->createOperator(0, -2)->getResult() << endl;
    cout << "1.5 + 2 = " << af->createOperator(1.5, 2)->getResult() << endl;
    cout << "1 + 2.5 = " << af->createOperator(1, 2.5)->getResult() << endl;
    cout << "1.5 + 2.5 = " << af->createOperator(1.5, 2.5)->getResult() << endl;

    cout << "1 - 2 = " << sf->createOperator(1, 2)->getResult() << endl;
    cout << "0 - -2 = " << sf->createOperator(0, -2)->getResult() << endl;
    cout << "1.5 - 2 = " << sf->createOperator(1.5, 2)->getResult() << endl;
    cout << "1 - 2.5 = " << sf->createOperator(1, 2.5)->getResult() << endl;
    cout << "1.5 - 2.5 = " << sf->createOperator(1.5, 2.5)->getResult() << endl;

    cout << "1 * 2 = " << mf->createOperator(1, 2)->getResult() << endl;
    cout << "0 * 2 = " << mf->createOperator(0, 2)->getResult() << endl;
    cout << "1.5 * 2 = " << mf->createOperator(1.5, 2)->getResult() << endl;
    cout << "1 * -2.5 = " << mf->createOperator(1, -2.5)->getResult() << endl;
    cout << "1.5 * 2.5 = " << mf->createOperator(1.5, 2.5)->getResult() << endl;

    cout << "1 / 2 = " << df->createOperator(1, 2)->getResult() << endl;
    cout << "0 / 2 = " << df->createOperator(0, 2)->getResult() << endl;
    cout << "1.5 / 2 = " << df->createOperator(1.5, 2)->getResult() << endl;
    cout << "1 / -2.5 = " << df->createOperator(1, -2.5)->getResult() << endl;
    cout << "1.5 / 2.5 = " << df->createOperator(1.5, 2.5)->getResult() << endl;
    //除零测试
    //cout << "1.5 / 0 = " << df->createOperator(1.5, 0)->getResult() << endl;
    //cout << "1.5 / 0.0 = " << df->createOperator(1.5, 0.0)->getResult() << endl;
    //cout << "1.5 / 0.0f = " << df->createOperator(1.5, 0.0f)->getResult() << endl;
    cout << "==============Test Done===============" << endl;

    return 0;
}
