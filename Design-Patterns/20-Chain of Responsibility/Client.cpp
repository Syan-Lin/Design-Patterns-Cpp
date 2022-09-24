#include <memory>
#include "Handler.h"

using namespace std;

int main(){
    auto ch1 = make_shared<ConcreteHandler1>();
    auto ch2 = make_shared<ConcreteHandler2>();
    ch1->setHandler(ch2);

    Request r1, r2, r3;
    r1.priority_ = 0;
    r2.priority_ = 1;
    r3.priority_ = 2;

    ch1->request(r1);
    ch1->request(r2);
    ch1->request(r3);

    return 0;
}
