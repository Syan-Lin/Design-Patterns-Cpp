#include "ClonePrototype.h"
#include <iostream>

using namespace std;

int main(){
    auto r1 = make_shared<Resume>();
    r1->setInfo("OUC", "C++");
    r1->setPersonalInfo("男", "张三", 24);
    r1->print();

    auto r2 = dynamic_pointer_cast<Resume>(r1->clone());
    r2->setInfo("OUC", "Java");
    r2->print();

    auto r3 = dynamic_pointer_cast<Resume>(r1->clone());
    r3->setPersonalInfo("女", "李四", 25);
    r3->print();

    return 0;
}
