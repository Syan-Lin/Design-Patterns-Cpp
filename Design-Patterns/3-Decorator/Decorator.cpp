#include "Printer.h"
#include "PrinterDecorator.h"
#include <memory>
#include <iostream>

using namespace std;

int main(){
    shared_ptr<IPrinter> printer = make_shared<Printer>("Hello World!");
    shared_ptr<IPrinter> dec1 = make_shared<BracketDecorator1>(printer);
    shared_ptr<IPrinter> dec2 = make_shared<BracketDecorator2>(printer);
    shared_ptr<IPrinter> dec3 = make_shared<BracketDecorator3>(printer);

    cout << "原始类：";
    printer->print();
    cout << endl;

    cout << "装饰效果1：";
    dec1->print();
    cout << endl;

    cout << "装饰效果2：";
    dec2->print();
    cout << endl;

    cout << "装饰效果3：";
    dec3->print();
    cout << endl;

    static_cast<BracketDecorator2*>(dec2.get())->decorate(dec1);
    static_cast<BracketDecorator3*>(dec3.get())->decorate(dec2);

    cout << "组合装饰效果：";
    dec3->print();
    cout << endl;

    return 0;
}
