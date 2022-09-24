#include <memory>
#include "Colleague.h"
#include "Mediator.h"

using namespace std;

int main(){
    ConcreteMediator* cm = new ConcreteMediator();
    ConcreteColleague1* c1 = new ConcreteColleague1(cm);
    ConcreteColleague2* c2 = new ConcreteColleague2(cm);
    cm->setColl1(c1);
    cm->setColl2(c2);
    c1->send("c1: send a message");
    c2->send("c2: send a message");

    return 0;
}
