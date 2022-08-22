#include "PrinterProxy.h"
#include <memory>
#include <iostream>

using namespace std;

int main(){
    shared_ptr<Printable> printer = make_shared<PrinterProxy>();
    cout << "查看参数: name: ";
    cout << printer->getPrinterName() << endl;
    cout << "设置参数: name: MyPrinter" << endl;
    printer->setPrinterName("MyPrinter");
    printer->print("Hello World!");

    return 0;
}
